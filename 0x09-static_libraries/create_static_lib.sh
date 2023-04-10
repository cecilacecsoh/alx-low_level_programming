#!/bin/bash
gcc -Wall -pedantic -Werror -pedantic -c *.c
ar -rc liball.a *.o
