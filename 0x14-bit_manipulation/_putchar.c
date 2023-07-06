#include <unistd>

/**
 * _putchar - write the character c to stdout
 * @c: input to be print
 *
 * Return: on success 1
 * On error , -1 is returned , and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
