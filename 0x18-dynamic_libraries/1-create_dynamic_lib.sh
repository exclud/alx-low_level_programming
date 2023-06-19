#!/bin/bash

# Compile all C files in the current directory into object files
for file in *.c
do
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c "$file"
done

# Create a shared library from all object files
gcc -shared -o liball.so *.o
