#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - wirtes the chharacter  to stdout
 * @c: the character to be print
 *
 * Return: On success 1.
 *         On error ,-1  and errno is set appropritely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
