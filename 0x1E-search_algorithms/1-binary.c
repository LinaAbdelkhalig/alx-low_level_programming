#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints an array of ints
 * @array: the array to be printed
 * @size: the number of elements in the array
 * Return: void
 */

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}


/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: index if found value, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	int res;

	if (!array)
		return (-1);

	print_array(array, size);
	if (size == 1 && array[0] != value)
		return (-1);

	mid = (size - 1) / 2;
	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
	{
		res = binary_search(array + mid + 1, size - mid - 1, value);
		if (res != -1)
			return (res + mid + 1);
	}
	else
	{
		return (binary_search(array, mid + 1, value));
	}
	return (-1);
}
