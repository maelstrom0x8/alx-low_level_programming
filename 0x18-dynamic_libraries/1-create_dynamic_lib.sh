#!/bin/bash

gcc -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -o liball.so *.o
rm *.o
