#include "main.h"

/**
 * string_toupper - make letters capital in strings
 *
 * @str: string to be upper
 *
 * Return: return string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
