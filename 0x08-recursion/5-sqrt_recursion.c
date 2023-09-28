#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number of which we will get the sqrt
 * Return: the natural square root or -1
 */

int sqr(int n, int value);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - get the square root
 * @n: the number to be calculated
 * @value: starting val
 * Return: integer
 */

int sqr(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (sqr(n, value + 1));
	else
		return (-1);
}
