#!/bin/bash
#compiling a program without linking
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
#create an archive that contains the library
ar -rc liball.a *.o
#index the library
ranlib liball.a
