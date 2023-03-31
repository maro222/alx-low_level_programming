#include "main.h"

/**
 * reverse_array - reverse 2 strings
 *
 * @a: destination string
 * @n: source string
 *
 * Return: return pointer to destination
 */

void reverse_array(int *a, int n)
{
	int i;
	char temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
