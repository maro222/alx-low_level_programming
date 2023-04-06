#include "main.h"

/**
 * _sqrt_recursion - prints a string , followed by a new line
 * @n: input
 * Return: int
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - auxilary function
 * @n: input
 * @i: input
 * Return: int
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		square(n, i + 1);
	else
		return (-1);
}
