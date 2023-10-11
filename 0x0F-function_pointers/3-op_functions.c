#include "3-calc.h"

/**
 * op_add - adding two ints
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of the two ints
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two ints
 * @a: the first int
 * @b: the second int
 * Return: the result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: the first int
 * @b: the second one
 * Return: the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: the first int
 * @b: the second int
 * Return: the resulting int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - rturn the remainder of the div
 * @a: the first int
 * @b: the second int
 * Return: the result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
