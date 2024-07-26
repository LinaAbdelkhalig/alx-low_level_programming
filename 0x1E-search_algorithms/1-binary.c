#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search algo
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: the value to be searched for
 *
 * Return: index of the found value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, i, m;

	if (!array)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		m = l + (r - l) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
