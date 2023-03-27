#include "main.h"

/**
 * puts2 - print the last n of string
 *
 * @str: string parameter input
 *
 * Return: nothing
*/

void puts2(char *str)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
		;

	n = (i / 2);

	for (i = n; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
