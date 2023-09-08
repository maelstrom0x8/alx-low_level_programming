#!/bin/bash


gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -g -o main

if [ $? -eq 0 ]
then
	valgrind -s --track-origins=yes ./main
fi

# --leak-check=full
