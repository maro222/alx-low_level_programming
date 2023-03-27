#include "main.h"

/**
 * _strlen - swap between 2 pointers
 *
 * @s: string parameter input
 *
 * Return: length of string
 */


int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		continue;
	return (i);
}
