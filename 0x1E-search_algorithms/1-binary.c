#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Print the contents of an array bounded by two
 * indices.
 * @array: Array of integers
 * @a: The upper index
 * @b: The lower index
*/
void print_array(int *array, int a, int b)
{
	int size = b - a;
	int i;

	if (size <= 0)
		return;

	printf("Searching in array: ");
	for (i = a; i < b+1; ++i)
	{
		printf("%d", array[i]);
		if (i != b )
			printf(", ");
	}
	printf("\n");
}


/**
 * bs_helper - This function recursively searches the array for
 * the value with each recursive step searching a partitioned half
 * of the array bounded by the begin and end parameters.
 * @array: Array of sorted integers
 * @begin: Upper bound
 * @end: Lower bound
 * @value: Target value
 * Return: The postion of the value or -1
*/
int bs_helper(int *array, size_t begin, size_t end, int value)
{
	size_t mid = (size_t)((end + begin) / 2);

	print_array(array, begin, end);
	if (value == array[mid])
		return (mid);

	if (begin == end)
		return (-1);
	else if (value > array[mid])
		return (bs_helper(array, mid + 1, end, value));
	else if (value < array[mid])
		return (bs_helper(array, begin, mid - 1, value));
	else
		return (-1);
}


/**
 * binary_search - Implementation of the binary search algorithm
 * Description: This function searches a sorted array for a value
 * and returns the position of the first occurence of that value.
 * @array: Sorted array of integers
 * @size: Size of the array
 * @value: Target value
 * Return: The index of the first occurence of the value or -1 if
 * the array does not contain that value.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t begin;
	size_t end;

	if (array == NULL)
		return (-1);

	begin = 0;
	end = size - 1;

	return (bs_helper(array, begin, end, value));
}
