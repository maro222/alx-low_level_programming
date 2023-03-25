#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 *
 * Return: On success 1, if not 0
*/

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
