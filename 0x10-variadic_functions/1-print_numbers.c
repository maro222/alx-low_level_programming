#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string input
 * @n: integer input
 * @...: variable input
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (n == 0)
	{
		printf("\n");
		return (0);
	}

	va_start(list, n);
	for (i = 0; i < n; i++)
		if (separator != NULL)
			printf("%d%s ", va_arg(list, int), separator);
		else
			printf("%d ", va_arg(list, int));
	va_end(list);
	printf("\n");
}
