#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints a list
 * Description: A function that prints all the elements
 * of a list_t list.
 * @h: A pointer to a list_t node
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%ld] %s\n", strlen(h->str), h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
