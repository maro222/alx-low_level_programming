#include "variadic_functions.h"

/**
 * print_strings - print numbers
 * @separator: string input
 * @n: integer input
 * @...: variable input
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list list;

	if (!n)
	{
		printf("\n");
		return (0);
	}
	va_start(list, n);
	while (i--)
		printf("%s%s", (str = va_arg(list, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(list);
}
