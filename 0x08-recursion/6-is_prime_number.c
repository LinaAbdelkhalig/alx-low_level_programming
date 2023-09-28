#include "main.h"

/**
 * is_prime_number - returns 1 if n is prime else 0
 * @n: the int to be checked
 * @m: the other n
 * Return: 1 or 0
 */
int cprime(int n, int m);

int is_prime_number(int n)
{
	return (cprime(n, 1));
}

/**
 * cprime - check for numbers the can divide n and are < n
 * @n: the number to check
 * @m: the number it will be divided by
 * Return: integer
 */

int cprime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (cprime(n, m + 1));
}
