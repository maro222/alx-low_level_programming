#include "main.h"

/**
 *get_endianness -  a function that checks the endianness.
 *
 *Return: 0 for big_endian, 1 for little endian
 *
 */

int get_endianness(void)
{
	int i = 1;

	char *ptr = (char *)&i;

	if (ptr[0] == 1)
		return (1);
	else
		return (0);
}
