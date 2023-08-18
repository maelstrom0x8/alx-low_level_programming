#include "lists.h"
#include <stddef.h>



/**
 * dlistint_length - Counts the number of nodes in a doubly linked list
 * @h: Pointer to the head node of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t dlistint_length(const dlistint_t *h)
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


/**
 * get_dnodeint_at_index - Retrieves a node from a doubly linked list
 * at a specific index
 * This function returns the pointer to the node located at the given index in
 * the doubly linked list pointed to by the head parameter.
 *
 * @head: Pointer to the head node of the doubly linked list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = dlistint_length(head);
	unsigned int idx = 0;
	dlistint_t *node = NULL;

	if (index > count)
		return (NULL);

	if (head == NULL)
		return (NULL);

	node = head;

	while (idx < index)
	{
		node = node->next;
		idx++;
	}

	return (node);
}
