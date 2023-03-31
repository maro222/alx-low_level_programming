#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 *
 * Return: return pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i++] = '\0';
	}
}
