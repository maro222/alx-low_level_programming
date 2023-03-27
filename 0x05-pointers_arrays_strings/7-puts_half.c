#include "main.h"

/**
 * puts2 - print the last n of string
 *
 * @str: string parameter input
 *
 * Return: nothing
*/

void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
		;

	n = (i / 2);

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
