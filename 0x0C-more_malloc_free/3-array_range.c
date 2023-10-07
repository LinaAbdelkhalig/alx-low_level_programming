#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int nmembers, n, *array;

	if (min > max)
		return (NULL);

	nmembers = max - min + 1;

	array = malloc(nmembers * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (n = 0; n < nmembers; n++)
	{
		array[n] = min;
		min++;
	}

	return (array);

}
