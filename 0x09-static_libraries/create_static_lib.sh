#!/bin/bash

# Compile each .c file into a corresponding .o file
for source_file in *.c; do
    object_file="${source_file%.c}.o"
    if ! gcc -Wall -Wextra -Werror -pedantic -c "$source_file" -o "$object_file"; then
        echo "Error compiling $source_file"
        exit 1
    fi
done

# Create the static library from all the .o files
ar rc liball.a *.o

# Clean up the .o files
rm -f *.o

echo "Static library liball.a created."
