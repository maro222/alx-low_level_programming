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
	unsigned long int temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = n;
	n = n >> 1;
	if (n * 2 == temp)
	{
		if (n != 0)
			print_binary(n);
		_putchar('0');
	}
	else
	{
		if (n != 0)
			print_binary(n);
		_putchar('1');
	}
}
