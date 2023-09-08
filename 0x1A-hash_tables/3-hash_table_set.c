#include "hash_tables.h"

/**
 * search_existing_key - Searches for a key within a linked list of
 * hash nodes.
 *
 * @head: The head of the linked list to search within.
 * @key: The key to search for.
 *
 * Return: A pointer to the hash node containing the matching key,
 * or NULL if not found.
 */
hash_node_t *search_existing_key(hash_node_t *head, const char *key)
{
	hash_node_t *node = head;

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node);
		}
		node = node->next;
	}

	return (NULL);
}

/**
 * hash_table_set - Adds a key-value pair to a hash table.
 *
 * @ht: The hash table where the key-value pair will be stored.
 * @key: The key to add to the hash table.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int slot;

	if (ht == NULL || strlen(key) < 1 || strlen(value) < 1
		|| *key == '\0' || key == NULL || value == NULL)
	{
		return (0);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->value = strdup(value);
	node->key = strdup(key);

	slot = key_index((const unsigned char *)key, ht->size);

	if (ht->array[slot] == NULL)
	{
		ht->array[slot] = node;
	}
	else
	{
		hash_node_t *existing = search_existing_key(ht->array[slot], key);

		if (existing != NULL)
		{
			free(existing->value);
			free(node->key);
			existing->value = node->value;
		}
		else
		{
			node->next = ht->array[slot];
			ht->array[slot] = node;
		}
	}

	return (1);
}
