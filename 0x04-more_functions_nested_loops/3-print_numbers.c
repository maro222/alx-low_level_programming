#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 *
 * Return: On success 1, if not 0
*/

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}
