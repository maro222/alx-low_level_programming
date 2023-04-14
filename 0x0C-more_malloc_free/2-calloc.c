#include "main.h"

/**
 * *_calloc - check malloc for reservation space
 * @nmemb: input
 * @size: input
 * Return: address success, terminates fails
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str, *ptr;
	unsigned int n, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(size * nmemb);

	if (str == NULL)
		return (NULL);
	n = sizeof(int) * nmemb;
	ptr = str;

	for (i = 0; i < n; i++)
		str[i++] = '0';
	return (ptr);
}
