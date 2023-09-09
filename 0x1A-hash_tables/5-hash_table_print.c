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
	unsigned long int i;
	char *sep = "";

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	}
	printf("}");
}
