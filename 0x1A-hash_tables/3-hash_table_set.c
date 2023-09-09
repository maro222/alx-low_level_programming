#include "hash_tables.h"

/**
 *hash_table_set -  a function that adds an element to the hash table.
 *
 *@ht:  is the hash table you want to add or update the key/value to
 *@key: key of the item
 *@value: value associated with the key
 *
 *Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int long idx;
	hash_node_t *item, *temp;

	if (!ht || !key || !(*key) || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[idx];

	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	if (temp)
	{
		free(temp->value);
		strcpy(temp->value, value);
		return (1);
	}


	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);

	strcpy(item->key, key);
	strcpy(item->value, value);

	item->next = ht->array[idx];
	ht->array[idx] = item;
	return (1);
}
