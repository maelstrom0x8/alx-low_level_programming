#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 *
 * This function creates a new node with the specified value and adds it at
 * the beginning of the doubly linked list pointed to by the head parameter.
 *
 * @head: Pointer to a pointer to the head node of the doubly linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: Address of the new element (new node), or NULL if allocation fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		(*head)->prev = node;
		node->next = (*head);
		(*head) = node;
	}

	return (node);
}
