#include "main.h"

/**
 *flip_bits - a function that returns the number of bits
 *		you would need to flip to get from one number to another.
 *
 *@n: first number
 *@m: second number
 *
 *Return: return the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;

	unsigned int long xor = n ^ m, prevxor;

	while (xor)
	{
		prevxor = xor;
		xor >>= 1;
		if (xor << 1 != prevxor)
			cnt++;
	}
	return (cnt);
}
