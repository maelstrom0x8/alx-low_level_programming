#include "hash_tables.h"

#include <stdbool.h>

/**
 * hash_table_delete - Deletes a hash table and its contents.
 *
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	hash_node_t *node = NULL;
	hash_node_t **head;

	if (ht == NULL)
		return;

	if (ht->array != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
				continue;

			head = &(ht->array[i]);

			while (true)
			{
				if ((*head) == NULL)
					break;
				node = (*head);
				(*head) = (*head)->next;
				free(node->key);
				free(node->value);
				free(node);
			}
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
