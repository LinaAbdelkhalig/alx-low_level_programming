#include "main.h"
/**
 * print_last_digit - print the last digit of a numver
 * @i: will print the last digit of this
 * Return: return the last difit
 */
int print_last_digit(int i)
{
	int rem;

	rem = i % 10;
	if (rem < 0)
		rem = -rem;
	_putchar(rem + '0');
	return (rem);
}
