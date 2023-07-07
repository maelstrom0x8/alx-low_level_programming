#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Sum the elements in a list
 * @head: Head
 * Return: int
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		node = head;
		sum = 0;
		while (node != NULL)
		{
			sum += node->n;
			node = node->next;
		}

		return (sum);
	}
}
