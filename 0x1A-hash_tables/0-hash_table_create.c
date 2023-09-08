#include "hash_tables.h"

/**
 *hash_table_create - A function that creates a hash table.
 *
 *@size: size of hash tables
 *
 *Return: null on failure, pointer to the newly created hash table on suceess
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;

	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
