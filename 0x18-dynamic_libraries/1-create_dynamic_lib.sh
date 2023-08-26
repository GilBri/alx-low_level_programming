#!/bin/bash

# Compile all .c files into a dynamic library
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.c