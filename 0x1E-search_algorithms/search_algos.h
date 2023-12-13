#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

int bs_helper(int *array, size_t begin, size_t end, int value);

void print_array(int *array, int a, int b);


#endif
