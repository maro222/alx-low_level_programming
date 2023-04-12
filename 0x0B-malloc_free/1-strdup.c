#include "main.h"

/**
 * _strdup - allocate an array of specific size
 * @str: string
 * Return: pointer success , Null fails
 */

char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *ch;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == NULL)
		return (NULL);
	for (; i < size; i++)
		ch[i] = str[i];
	return (ch);
}
