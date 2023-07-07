#include "main.h"

/**
 *set_bit - set a certain bit in a number
 *
 *@n: certain number
 *@index: index offor a certain bit
 *
 *Return: modified number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
