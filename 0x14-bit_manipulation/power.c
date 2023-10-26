#include "main.h"

/**
 * power - finds the result of b to the power of p
 * @b: the base
 * @p: the power
 * Return: the result of b ^ p int
 */

int power(int b, int p)
{
	int res = 1, i;

	for (i = 0; i < p; i++)
	{
		res = res * b;
	}
	return (res);
}
