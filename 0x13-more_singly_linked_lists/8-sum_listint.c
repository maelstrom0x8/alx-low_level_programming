#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"



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
