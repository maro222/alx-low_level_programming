#include "main.h"

/**
 * print_triangle - print triangles
 *
 * @size: input
 *
 * Return: no return
*/

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((i + j) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
