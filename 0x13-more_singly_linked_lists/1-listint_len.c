#include <stdio.h>
#include <string.h>
#include "lists.h"



size_t listint_len(const listint_t *h)
{
	size_t count;
	
	count  = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
