#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 *
 * @ht: The hash table from which to retrieve the value.
 * @key: The key for which to retrieve the value.
 *
 * Return: The value associated with the given key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int slot;
	hash_node_t *head, *t;

	if (ht == NULL)
	{
		return (NULL);
	}

	slot = key_index((const unsigned char *)key, ht->size);
	head = ht->array[slot];

	if (head == NULL)
		return (NULL);
	else if (head != NULL)
		t = head;

	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
		{
			return (t->value);
		}

		t = t->next;
	}

	return (NULL);
}
