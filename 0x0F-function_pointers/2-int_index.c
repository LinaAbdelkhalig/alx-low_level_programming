#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an int
 * @array: the array of elements the we will search through
 * @size: the size of array
 * @cmp: pointer to the function used to compare values
 * Return: the index of the element that passed the check
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
				return (n);
		}
	}
	return (-1);
}
