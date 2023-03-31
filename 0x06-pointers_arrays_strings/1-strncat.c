#include "main.h"

/**
 * _strncat - concatenate 2 strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytesof src
 *
 * Return: return pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; c2 < n && src[c] != '\0'; c2++)
	{
		dest[c] = src[c2];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
