#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: pointer to the integer to be changed
 * @index: the index of the bit to be changed
 * Return: 1 if it worked or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
