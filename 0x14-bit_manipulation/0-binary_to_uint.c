#include "main.h"
/**
 * power - finds the result of b to the power of p
 * @b: the base
 * @p: the power
 * Return: the result of b ^ p int
 */

unsigned int power(int b, unsigned int p)
{
	unsigned int res = 1, i;

	for (i = 0; i < p; i++)
	{
		res = res * b;
	}
	return (res);
}

/**
 * binary_to_uint - converts a binary to unsigned integer
 * @b: pointer to the string of binary number
 * Return: the converted number or 0 if failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 0;
	int unint = 0, binlen;

	if (!b)
		return (0);
	for (binlen = 0; b[binlen] != '\0'; binlen++)
	{
		if (b[binlen] != '0' && b[binlen] != '1')
			return (0);
	}
	for (binlen--; binlen >= 0; binlen--)
	{
		unint += (b[binlen] - '0') * power(2, pow);
		pow++;
	}
	return (unint);
}
