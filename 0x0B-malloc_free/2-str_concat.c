#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the resulting array
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;
	char *array;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	array = malloc((size1 + size2) * sizeof(char) + 1);

	if (array == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			array[i] = s1[i];
		else
			array[i] = s2[i - size2];
	}
	array[i] = '\0';
	return (array);
}
