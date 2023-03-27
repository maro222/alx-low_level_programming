#include "main.h"

/**
 * _strcpy - print n elements of string
 *
 * @src: string parameter input
 * @dest: number of elements
 *
 * Return: nothing
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
