#include "main.h"

/**
 * create_array - allocate an array of specific size
 * @size: input size
 * @c: string
 * Return: pointer success , Null fails
 */

char *create_array(unsigned int size, char c)
{
	char *ch = malloc(size * sizeof(char));

	if (ch == NULL || size == 0)
		return (NULL);

	while (size--)
		ch[size] = c;
	return (ch);
}
