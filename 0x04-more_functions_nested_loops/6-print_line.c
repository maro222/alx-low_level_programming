#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: input
 *
 * Return: no return
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int j;

		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
