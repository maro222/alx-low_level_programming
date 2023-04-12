#include "main.h"

/**
 * str_concat - allocate an array of specific size
 * @s1: string
 * @s2: string
 * Return: pointer success , Null fails
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, size1 = 0, size2 = 0;
	char *ch;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	for (; s1[size1] != '\0'; size1++)
	;

	for (; s2[size2] != '\0'; size2++)
	;

	ch = malloc((size1 + size2) * sizeof(char) + 1);

	if (ch == 0)
		return (NULL);
	for (; i <= (size1 + size2); i++)
		if (i < size1)
			ch[i] = s1[i];
		else
			ch[i] = s2[i - size1];
	ch[++i] = '\0';
	return (ch);
}
