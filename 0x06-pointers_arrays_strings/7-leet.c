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
	int i;
	char *ptr =c;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
				*c = 48 + value[i];
		}
	}
	return (ptr);
