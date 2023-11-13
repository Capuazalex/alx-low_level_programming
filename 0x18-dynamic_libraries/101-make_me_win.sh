#!/bin/bash
gcc -shared -o myprintf.so  -fpic hack.c
export LD_PRELOAD=./myprintf.so:$LD_LIBRARY_PATH
