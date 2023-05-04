#include "main.h"

/**
 * binary_to_uint - binary to decimal
 *
 *@b: binary in string format
 *Return: int format
 */

unsigned int binary_to_uint(const char *b)
{
	const char *ptr = b;
	int i = 0;
	unsigned int sum = 0;

	while (*ptr)
	{
		i++;
		ptr++;
	}

	i--;

	while (*b)
	{
		if (*b == '1')
		{
			sum += ((*b - '0') * (1  << (i));
			i--;
			b++;
		}
		else if (*b == '0')
		{
			sum += 0;
			i--;
			b++;
		}
		else
			return (0);
	}
	return (sum);
}
