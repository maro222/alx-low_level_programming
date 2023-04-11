#include <main.h>

/**
 * create_array - allocate an array of specific size
 * @size: input size
 * @c: string
 * Return: pointer success , Null fails
 */

char *create_array(unsigned int size, char c)
{
	char *ch = (char)malloc(size * sizeof(char));
	
	if (ch == NULL || size == 0)
		return (NULL);
	else
	{
		int i;

		for (i = 0; i < size; i++)
			ch[i] = c;
	}
	return (ch);
}
