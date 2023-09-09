#include "hash_tables.h"

/**
 *hash_table_delete - function that deletes a hash table.
 *
 *@ht: hash table
 *
 *Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur, *prev;

	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];

		while (cur)
		{
			prev = cur;
			cur = cur->next;

			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
