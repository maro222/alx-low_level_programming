#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 *
 *@key: the key of the item
 *@size: size of thr hash table
 *
 *Return: index of he key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;

	return (index);
}
