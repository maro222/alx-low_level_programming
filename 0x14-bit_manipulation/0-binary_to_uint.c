#include "main.h"

/**
 *binary_to_uint - from binary to decimal
 *
 *@b : binary number formatted string
 *Return: decimal number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, idx, temp, dec = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;

	for (j = i; j >= 0; j--)
	{
		idx = b[i - j] - '0';
		if (idx == 0)
		{
			continue;
		}
		temp = j;
		while (temp--)
			idx *= 2;
		dec += idx;
	}
	return (dec);
}
