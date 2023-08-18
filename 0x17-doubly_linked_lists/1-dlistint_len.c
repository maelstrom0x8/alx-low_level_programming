#include "lists.h"



/**
 * dlistint_len - Counts the number of nodes in a doubly linked list
 * @h: Pointer to the head node of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t sum = 0;

	while (node != NULL)
	{
		sum++;
		node = node->next;
	}

	return (sum);
}
