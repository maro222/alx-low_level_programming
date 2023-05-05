#include "main.h"

/**
 *get_bit - get
 *@n: num
 *@index: index
 *Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{

	int bits = sizeof(n) * 8, flagprint = 0;
	unsigned int i = 0;

	if (index >= sizeof(n) * 8)
		return (-1);
	i = bits - 1;

	while (bits)
	{
		if (n & 1l << --bits)
		{
			if (index == i)
			{
				return (1);
			}
			i--;
			flagprint = 1;
		}
		else if (flagprint)
		{
			if (index == i)
			{
				return (0);
			}
			i--;
		}
		else
			i--;
	}
	return (0);
}
