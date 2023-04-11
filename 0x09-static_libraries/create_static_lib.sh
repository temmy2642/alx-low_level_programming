#!/bin/bash

# Compile all the .c files into .o files
gcc -c *.c

# Create the static library
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up the .o files
rm *.o
