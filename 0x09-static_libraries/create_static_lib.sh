#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create static library
ar rcs liball.a *.o

# Clean up .o files
rm *.o

