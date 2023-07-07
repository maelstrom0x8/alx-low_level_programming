#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free list and set head to null
 * @head: Head
*/

void free_listint2(listint_t **head)
{
	listint_t *node;

	if ((*head) == NULL)
		return;

	while ((*head) != NULL)
	{
		node = (*head);
		(*head) = (*head)->next;
		free(node);
	}
}
