#include "varaidic_functions.h"

/**
 * sum_them_all - varaidic funcion that sum the parameters
 * @n: input
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int i, sum = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
