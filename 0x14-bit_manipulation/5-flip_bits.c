#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip..
 * @n: the number to flip
 * @m: the number that is floppen to 
 * Return: the number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return count;
}
