#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Entrypoint
 * Description: A function the returns the
 * number of elements in a linked list_t list.
 * @h: A pointer to a list_t node
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
