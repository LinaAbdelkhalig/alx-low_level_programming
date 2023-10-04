#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a space in memory containing a string
 * @str: the string we will place in the allocated space
 * Return: pointer to the newly allocated memory space
 */

char *_strdup(char *str)
{
	int i, size = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	while (str[size] != 0)
		size++;

	array = malloc(size * sizeof(*str) + 1);

	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = str[i];
	return (array);
}
