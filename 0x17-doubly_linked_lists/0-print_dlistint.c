#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list
 * @h: Pointer to the head node of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t sum = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		sum++;
		node = node->next;
	}

	return (sum);
}
