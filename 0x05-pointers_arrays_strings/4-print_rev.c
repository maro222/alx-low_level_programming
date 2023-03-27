#include "main.h"

/**
 * print_rev - print the reverse of string
 *
 * @s: string parameter input
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
