#include "hash_tables.h"

/**
 *hash_table_print -  a function that prints a hash table
 *
 *@ht: is the hash table
 *Return: nothin
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int i;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp)
		{
			if (ht->size == i && !temp->next)
				printf("'%s': '%s'\n}", ht->key, ht->value);
			else
				printf("'%s': '%s', ", ht->key, ht->value);
			temp = temp->next;
		}
	}
}
