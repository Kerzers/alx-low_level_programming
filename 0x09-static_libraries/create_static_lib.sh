#!/bin/bash
gcc -c -Wall -Wextra -pedantic *.c
ar -rc liball.a *.o
