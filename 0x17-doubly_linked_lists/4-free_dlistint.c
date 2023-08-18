#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees memory allocated for a doubly linked list
 *
 * This function releases the memory allocated for each node
 * in the doubly linked list pointed to by the head parameter.
 * It iterates through the list, freeing
 * the memory of each node, and sets the pointers to NULL.
 *
 * @head: Pointer to the head node of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
