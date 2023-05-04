#include "main.h"

/**
 * print_binary - print
 *@n: number
 *
 *Return: binary
 */


void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, flagprint = 0;

	while (bits)
	{
		if (n & 1l << --bits)
		{
			printf("1");
			flagprint++;
		}
		else if (flagprint)
		{
			printf("0");
		}
	}
		if (!flagprint)
			printf("0");
}
