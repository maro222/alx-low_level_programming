#include "main.h"

/**
 * print_most_numbers - print numbers from 0 - 9 except 2 and 4
 *
 *
 * Return: On success 1, if not 0
*/

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + 48);
	}
	_putchar('\n');
}
