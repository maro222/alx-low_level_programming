#include "main.h"

/**
 * cap_string - strings
 *
 * @str: destination string
 *
 * Return: return pointer to destination
 */

char *cap_string(char *str)
{
	int i;
	char *ptr = str;
	char del[] = " \t\n,.!?\"(){}";

	if (str[0] == '\0')
		return (str);
	for (i = 1; str[i]; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (str[i - 1] ==  del[i])
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] -= 32;
					break;
				}
		}
	}
	return (ptr);
}
