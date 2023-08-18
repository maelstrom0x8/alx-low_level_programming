#include "lists.h"
#include <stdlib.h>

#include <assert.h>

/**
 * make_node - Creates a new node and initializes it
 *
 * This function creates a new node with the specified value and initializes
 * its fields. If the provided node pointer is not NULL, the function returns
 * indicating that a node already exists.
 *
 * @node: Pointer to a pointer to the new node.
 * @n: The value to be stored in the new node.
 *
 * Return: 0 if the node creation and initialization succeeded, 1 otherwise.
 */
int make_node(dlistint_t **node, int n)
{
	if (*node != NULL)
		return (1);

	*node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (1);

	(*node)->n = n;
	(*node)->next = NULL;
	(*node)->prev = NULL;

	return (0);
}


/**
 * dlistint_length - Counts the number of nodes in a doubly linked list
 * @h: Pointer to the head node of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t dlistint_size(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t sum = 0;

	while (node != NULL)
	{
		sum++;
		node = node->next;
	}

	return (sum);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a specific
 * index in a doubly linked list.
 * This function creates a new node with the specified value and inserts it at
 * the specified index in the doubly linked list pointed to by the h parameter.
 * @h: Pointer to a pointer to the head node of the doubly linked list.
 * @idx: Index at which the new node should be inserted (starting from 0).
 * @n: The value to be stored in the new node.
 *
 * Return: Address of the new element (new node), or NULL if insertion fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = NULL;
	dlistint_t *node = NULL;
	size_t count = dlistint_size(*h);

	if (*h == NULL || idx > count)
		return (NULL);
	current = *h;
	while (i < idx && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i < idx || make_node(&node, n) != 0)
		return (NULL);

	if (idx == 0)
	{
		node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = node;
		}
		*h = node;
	}
	else
	{
		node->next = current;
		node->prev = current->prev;
		if (current->prev != NULL)
		{
			current->prev->next = node;
		}
		current->prev = node;
	}

	return (node);
}
