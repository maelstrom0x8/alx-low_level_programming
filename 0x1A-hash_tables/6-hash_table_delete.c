#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its contents.
 *
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	hash_node_t *node = NULL;
	hash_node_t *temp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];

			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				node = temp;
			}
		}
	}

	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
