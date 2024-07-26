#include "search_algos.h"

/**
 * linear_search - uses linear search algo to serach for value
 * @array: pointer to the first element where the value may be
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: index of the value if found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
