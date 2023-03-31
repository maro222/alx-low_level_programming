#include "main.h"

/**
 * leet -  decodes t0 1337
 *
 * @c: source string
 *
 * Return: return pointer to destination
 */

char *leet(char *c)
{
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	char value[] = {4, 3, 0, 7, 1};
	int i, j;

	j = 0;

	while (c[j])
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (c[j] == key[i] || c[j] == key[i] + 32)
				c[j] = 48 + value[i];
		}
		j++;
	}
	return (c);
