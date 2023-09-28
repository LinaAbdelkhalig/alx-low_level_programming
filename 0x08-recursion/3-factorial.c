#include "main.h"

/**
 * factorial - calculates the factorial
 * @n: the number to be factorliazed
 * Return: the factorial or -1 if an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
