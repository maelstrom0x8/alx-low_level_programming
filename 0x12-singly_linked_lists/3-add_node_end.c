#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Entrypoint
 * Description: A function that adds a new node
 * at the end of a list_t list.
 * @head: Head of the list
 * @str: String for the node
 * Return: The added node or null on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *current;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		current = *head;

		while ((current)->next != NULL)
		{
			current = current->next;
		}
			current->next = node;
	}
	return (node);
}
