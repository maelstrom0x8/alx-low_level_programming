#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* print_listint - Prints all the elements of a list
* @h: Head
* Return: size
*/

size_t print_listint(const listint_t *h)
{
	size_t count;

	count  = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
