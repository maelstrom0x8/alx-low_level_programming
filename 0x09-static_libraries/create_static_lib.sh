#!/bin/bash
find . -type f -name '*.c' -exec gcc -c {} \;
ar -rc libmylib.a *.o
rm *.o
