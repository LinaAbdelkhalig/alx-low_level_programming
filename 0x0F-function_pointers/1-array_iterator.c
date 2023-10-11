#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on elements of arr
 * @array: the given array
 * @size: the size of the array
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (action != NULL)
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
}
