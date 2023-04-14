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
	int i;
	int *str, *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(sizeof(int) * nmemb);

	if (str == NULL)
		return (NULL);
	n = sizeof(int) * nmemb;
	ptr = str;

	while (n--)
		*str++ = 0;
	return (ptr);
}
