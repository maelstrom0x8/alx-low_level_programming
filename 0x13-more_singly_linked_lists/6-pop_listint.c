#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: Head
 * Return: int
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	if ((*head) == NULL)
	{
		return (0);
	}
	else
	{
		h = (*head);
		n = h->n;
		(*head) = (*head)->next;
		free(h);
		return (n);
	}
}
