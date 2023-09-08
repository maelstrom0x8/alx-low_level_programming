#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 *
 * @size: The size of the hash table to create.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if memory allocation fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));

	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
