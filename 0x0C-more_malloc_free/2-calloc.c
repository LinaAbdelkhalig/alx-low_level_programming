#include "main.h"
#include <stdlib.h>

/**
 * _memset - puts a certain byte b into a memory space
 * @s: pointer to the memory space where the byte will be placed
 * @b: the byte to be placed
 * @n: the number of bytes to be used
 * Return: s pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *pointer = s;

	while (n--)
		*s++ = b;

	return (pointer);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of the elements of the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == 0)
		return (NULL);

	_memset(array, 0, size * nmemb);

	return (array);
}
