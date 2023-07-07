#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free a linked list
 * @head: Head
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
