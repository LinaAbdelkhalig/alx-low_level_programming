#include "search_algos.h"

/**
 * interpolation_search - searches for an element using interpola-
 * tion search
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the element else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
