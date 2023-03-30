#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Entrypoint
 * Description: A function that adds a new node
 * at the beginning of a list_t list.
 * @head: Head of the list
 * @str: String for the node
 * Return: The added node or null on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->next = *head;
	*head = node;

	return (node);
}
