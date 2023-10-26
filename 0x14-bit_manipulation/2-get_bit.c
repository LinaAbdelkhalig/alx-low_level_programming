#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 * Return: void
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
