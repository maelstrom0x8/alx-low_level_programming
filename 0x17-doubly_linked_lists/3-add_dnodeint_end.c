#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 *
 * This function creates a new node with the specified value and adds it at
 * the end of the doubly linked list pointed to by the head parameter.
 *
 * @head: Pointer to a pointer to the head node of the doubly linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: Address of the new element (new node), or NULL if allocation fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		dlistint_t *current = (*head);

		while (current->next != NULL)
			current = current->next;
		current->next = node;
		node->prev = current;
	}

	return (node);
}
