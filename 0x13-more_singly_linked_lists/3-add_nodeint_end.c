#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"



listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *current;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = node;
	}
	else
	{
		current = (*head);
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node;
	}

	return (node);
}
