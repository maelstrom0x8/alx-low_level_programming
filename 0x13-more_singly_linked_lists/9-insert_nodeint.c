#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node at index
 * @head: Head
 * @idx: index
 * @n: value
 * Return: Pointer to list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *new_node;

	if ((*head) == NULL)
	{
		return (NULL);
	}
	else
	{
		node = (*head);
		new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		i = 0;
		while (node != NULL && i < idx - 1)
		{
			node = node->next;
			i++;
		}
		new_node->next = node->next;
		node->next = new_node;
		return (new_node);
	}

	return (NULL);
}
