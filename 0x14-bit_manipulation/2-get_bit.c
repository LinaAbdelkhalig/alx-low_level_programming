#include "main.h"

/**
 * get_bit - prints the binary representation of a number
 * @n: the integer to be searced
 * @index: the index at which the bit is wanted
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
