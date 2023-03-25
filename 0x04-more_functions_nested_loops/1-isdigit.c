#include "main.h"

/**
 * _isdigit - checks for integers
 *
 * @c: input
 *
 * Return: On success 1, if not 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
