#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n integers of an array
 * @a: the array from which the integers will be printed
 * @n: the number of integers that will be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		else
			continue;
	}
	printf("\n");
}
