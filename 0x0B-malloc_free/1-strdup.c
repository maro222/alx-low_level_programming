#include "main.h"

/**
 * _strdup - allocate an array of specific size
 * @str: string
 * Return: pointer success , Null fails
 */

char *_strdup(char *str)
{
	char *ch = malloc(sizeof(str));
	unsigned int i = 0;

	if (ch == NULL || sizeof(str) == 0)
		return (NULL);

	for (; i < sizeof(str); i++)
		ch[i] = str[i];
	return (ch);
}
