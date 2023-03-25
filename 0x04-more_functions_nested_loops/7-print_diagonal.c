#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: input
 *
 * Return: no return
*/

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int k;

			for (k = 0; k < i; k++)
			{
				if (k == i - 1)
					_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
