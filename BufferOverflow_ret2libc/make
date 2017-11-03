#!/bin/sh
gcc -g -m32 -fno-stack-protector -c tucksay.c  -o tsay.o
gcc -g -m32 -fno-stack-protector -c exploit.c  -o e.o
gcc -g -m32 -z execstack tsay.o e.o -o tsay
echo "Done"
