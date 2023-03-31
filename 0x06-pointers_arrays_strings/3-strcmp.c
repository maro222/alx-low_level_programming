#include "main.h"

/**
 * _strcmp - compare between 2 strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: return an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
			return (((int)s1[i] - 48) - ((int)s2[i] - 48));
	}
	return (0);
}

