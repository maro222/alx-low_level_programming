#include "main.h"

/**
 * print_binary - from decimal to binary
 *
 *@n: number in decimal
 *Return: number in binary
 *
 */

void print_binary(unsigned long int n)
{
	int temp;

	if (n == 0)
	{
		printf("%d", 0);
		return;
	}

	temp = n;
	n = n >> 1;
	if (n * 2 == temp)
	{
		if (n != 0)
			print_binary(n);
		printf("%d", 0);
	}
	else
	{
		if (n != 0)
			print_binary(n);
		printf("%d", 1);
	}
}
