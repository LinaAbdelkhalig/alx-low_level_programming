nclude <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if value is not present in array or if array is NULL
 */


int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (size_t i = low; i <= high; i++)
			printf("%d%s", array[i], i == high ? "\n" : ", ");
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else
			if (array[mid] > value)
				high = mid - 1;
			else
				return (mid);
	}
	return (-1);
}


/**
 * exponential_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound < size)
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, size - 1);

	return binary_search(array + bound / 2, bound < size ? bound / 2 + 1 : size - bound / 2, value);
}

