#include "main.h"

/**
 * _sqrt_recursion - prints a string , followed by a new line
 * @n: input
 * Return: void
 */
int _sqrt_recursion(int n)
{
	square(n , 1);
}
int square(int n, int i)
{
	if (i * i == n)
		return (n);
	else if (i * i < n)
		_sqrt_recursion(n , i + 1);
	else
		return (-1);
}
