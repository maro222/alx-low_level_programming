#include "main.h"

/**
 * *malloc_checked - check malloc for reservation space
 * @b: input
 * Return: address success, terminates fails
 *
 */

void *malloc_checked(unsigned int b)
{
	char *ch = malloc(sizeof(char) * b);

	if (ch == NULL)
		exit(98);
	return (ch);
}
