#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at index
 * @head: Head
 * @index: Index
 * Return: int
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node;
	listint_t *p;

	p = NULL;

	if ((*head) == NULL)
	{
		return (-1);
	}
	else
	{
		node = (*head);
		for (i = 0; i < index; i++)
		{
			p = node;
			node = node->next;
		}
		p->next = node->next;
		free(node);
		return (1);
	}

	return (-1);
}
