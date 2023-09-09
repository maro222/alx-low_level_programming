#include "hash_tables.h"

/**
 *hash_table_get - a function that retrieves a value associated with a key.
 *
 *@ht: is the hash table you want to look int
 *@key: is the key you are looking for
 *
 *Return: null on failure, value on success
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *ptr;

	if (!ht || !key || !(*key))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[idx];

	while (ptr && strcmp(ptr->key, key) != 0)
		ptr = ptr->next;

	if (!ptr)
		return (NULL);
	return (ptr->value);
}
