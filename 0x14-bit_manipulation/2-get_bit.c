#include "main.h"

/***/

int get_bit(unsigned long int n, unsigned int index)
{

	int bits = sizeof(n) * 8, flagprint = 0;
	unsigned int i = 0;

	if (index >= bits)
		return (-1);
	while (bits)
	{
		if (n & 1l << --bits)
		{
			if (index == i)
			{
				printf("1");
				return 0;
			}
			i++;
			flagprint++;
		}
		else if (flagprint)
		{
			if (index == i)
			{
				printf("0");
				return 0;
			}
			i++;
		}
	}
	printf("0");
}
