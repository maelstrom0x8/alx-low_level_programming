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
	int i = a;

	printf("Searching in array: ");

	while (i != b + 1)
	{
		printf("%d", array[i]);
		if (i != b)
			printf(", ");
		++i;
	}
	printf("\n");
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

	while (begin <= end)
	{
		size_t mid = (size_t)((end + begin) / 2);

		if (begin != end + 1)
			print_array(array, begin, end);

		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			begin = mid + 1;
		if (value < array[mid])
			end = mid - 1;
	}

	return (-1);
}
