#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: the size of the array
 * @c: the character that will be used in the initialization
 * Return: NULL if the size is 0 or the funstion fails or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == 0)
		return (NULL);

	while (size--)
		array[size] = c;

	return (array);
}
