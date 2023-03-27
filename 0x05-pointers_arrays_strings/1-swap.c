#include "main.h"

/**
 * swap_int - swap between 2 pointers
 *
 * @a: 1st parameter
 * @b: 2nd parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
