#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a space in memory containing a string
 * @str: the string we will place in the allocated space
 * Return: pointer to the newly allocated memory space
 */

char *_strdup(char *str)
{
	long unsigned int i;
	char *array = malloc(sizeof(str));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < sizeof(str); i++)
		array[i] = str[i];
	return (array);
}
