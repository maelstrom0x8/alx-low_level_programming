#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Entrypoint
 * Description: A function that frees a list_t list.
 * @head: Head of the list
 */

void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		node = head;
		head = head->next;
		if (node->str != NULL)
			free(node->str);
		free(node);
	}
	if (head->str != NULL)
		free(head->str);
	free(head);
}
