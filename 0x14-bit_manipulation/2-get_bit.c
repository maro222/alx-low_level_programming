#include "main.h"

/**
 *get_bit - get index of certain bit
 *
 *@n: ddecimal number
 *@index: index of bit
 *
 *Return: index of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = n;
	unsigned int size = 0;

	if (n == 0)
		return (0);
	while (i)
	{
		i /= 2;
		size++;
	}
	size--;
	index = size - index;

	if (size < index)
		return (-1);

	while (n)
	{
		if (index == size)
		{
			if (n % 2 == 0)
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
		n /= 2;
		size--;
	}
	return (-1);
}
