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
	unsigned int i, j, size, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;

	ch = malloc(i + n + 1);

	if (ch == NULL)
		return (NULL);

	for (size = 0; size < i; size++)
		ch[size] = s1[size];
	for (len = 0; len < n; len++)
		ch[size] = s2[len];
	ch[size] = '\0';
	return (ch);
}
