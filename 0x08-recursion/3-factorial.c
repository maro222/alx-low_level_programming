#include "main.h"

/**
 * factorial - prints a string , followed by a new line
 * @n: input
 * Return: void
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
		return (factorial(n - 1) + factorial(n - 2));
}
