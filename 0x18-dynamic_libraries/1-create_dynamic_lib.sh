#!/bin/bash

# Compile all .c files into a dynamic library
gcc -shared -o liball.so *.c
