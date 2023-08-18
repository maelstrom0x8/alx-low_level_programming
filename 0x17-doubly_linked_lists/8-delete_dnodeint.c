#include "lists.h"
#include <stdlib.h>



/**
 * delete_dnodeint_at_index - Deletes a node at a specific
 * index in a doubly linked list
 * This function deletes the node at the specified index in
 * the doubly linked list pointed to by the head parameter.
 *
 * @head: Pointer to a pointer to the head node of the doubly linked list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if deletion succeeded, -1 if deletion fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (i < index)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
