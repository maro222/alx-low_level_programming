#include "main.h"

/**
 * rev_string - print the reverse of string
 *
 * @s: string parameter input
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	char temp;
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	while (j < i / 2)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
		j++;
	}
}
