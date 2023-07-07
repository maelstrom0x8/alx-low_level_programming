#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: Head
 * @index: Node index
 * Return: Pointer to list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		node = head;
		for (i = 0; i < index; i++)
		{
			node = node->next;
		}
		return (node);
	}

	return (NULL);
}
