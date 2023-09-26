#include "main.h"

/**
 * print_diagsums - prints the sum of 2 diagonals in a square matrix
 * @a: the matrix we will be using
 * @size: of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = 0, i;

	for (i = 0; i < size; i++)
		s1 += a[i];

	for (i = size - 1; i >= 0; i++)
		s2 += a[i];

	printf("%d, %d\n", s1, s2);
}
