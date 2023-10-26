#include "hash_tables.h"



/**
 * hash_table_print - Prints the contents of a hash table.
 *
 * @ht: The hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	int printed = -1;
	unsigned long i = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	printed = 0;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *temp = ht->array[i];

		while (temp != NULL)
		{
			if (printed > 0)
			{
				printf(", ");
			}

			printf("'%s': '%s'", temp->key, temp->value);
			printed++;

			temp = temp->next;
		}
	}

	printf("}\n");
}
