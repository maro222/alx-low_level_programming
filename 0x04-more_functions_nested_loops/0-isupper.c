#include "main.h"

/**
 * _isupper - check for upper characters
 *
 * @c: input for alpabet
 *
 * Return: On success 1, if not 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
