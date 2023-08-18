#include "lists.h"

/**
 * sum_dlistint - Computes the sum of values in a doubly linked list
 *
 * This function calculates and returns the sum of the values stored in
 * the nodes of the doubly linked list pointed to by the head parameter.
 *
 * @head: Pointer to the head node of the doubly linked list.
 *
 * Return: Sum of the values in the nodes of the list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);

}
