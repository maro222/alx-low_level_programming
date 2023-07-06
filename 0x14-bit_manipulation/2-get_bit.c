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
	while (n)
	{
		if (index == 0)
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
		index--;
	}
	return (-1);
}
