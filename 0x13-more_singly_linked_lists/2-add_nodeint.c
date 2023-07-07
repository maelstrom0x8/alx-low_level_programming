#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
* add_nodeint - Add a new node at the beginning of a list
* @head: List head
* @n: value
* Return: Pointer to list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	if ((*head) == NULL)
	{
		(*head) = node;
	}
	else
	{
		node->next = (*head);
		(*head) = node;
	}

	return (node);
}
