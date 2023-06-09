#include "main.h"

/**
 * *array_range - check malloc for reservation space
 * @min: input
 * @max: input
 * Return: address success, terminates fails
 *
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
