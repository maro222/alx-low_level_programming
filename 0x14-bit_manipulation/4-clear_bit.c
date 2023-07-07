#include "main.h"

/**
 *
 *clear_bit - make certain bit unset
 *
 *@n: certain number
 *@index: index of needed bit yo usnet
 *
 * return: the modified number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(*n) * 8 <= index)
		return (-1);

	*n = *n & ~(1 << index);
}
