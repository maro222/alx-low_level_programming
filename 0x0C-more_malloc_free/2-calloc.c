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
	int *str;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(sizeof(int) * nmemb);

	if (str == NULL)
		return (NULL);
	n = sizeof(int) * nmemb;
	for (i = 0; i < n; i++)
		str[i] = 0;
	return (str);
}
