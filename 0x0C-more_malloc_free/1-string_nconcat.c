#include "main.h"

/**
 * *string_nconcat - check malloc for reservation space
 * @n: input
 * @s1: input
 * @s2: input
 * Return: address success, terminates fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int i, j, size;

	if (s1 == NULL)
		*s1 = "\0";
	if (s2 == NULL)
		*s2 = "\0";
	*ch = malloc((sizeof(*s1) + n) + 1);

	if (ch == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	if (j > n)
		j = n;

	for (size = 0; size <= (i + j); size++)
		if (size < i)
			ch[size] = s1[size];
		else
			ch[size] = s2[size - i];
	ch[size] = '\0';
	return (ch);
}
