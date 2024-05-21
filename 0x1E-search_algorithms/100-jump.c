#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of ints
 * @array: pointer to the first element of the array
 * @size: of the array
 * @value: the value to search for
 *
 * Return: index if value is found, otherwisw -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, j;

	if (!array)
		return (-1);

	jump = sqrt(size);
	for (i = 0; i < size, i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
			for (j = i - jump; j <= i; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	if (i >= size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
		for (j = i - jump; j < size; j++)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			if (array[j] == value)
				return (j);
		}
	}
	return (-1);
}
