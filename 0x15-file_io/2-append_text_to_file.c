#include "main.h"
/**
 * append_text_to_file - add text to an already existing file
 *
 * @filename: the name of the file to append content to
 * @text_content: the content to be appended to the file
 * Return: 1 if successful and -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
