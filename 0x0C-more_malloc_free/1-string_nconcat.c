#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the amount of bytes from s2 that will be returned
 * Return: pointer that points to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j, lens1, lens2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;

	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;

	string = malloc(lens1 + n + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		string[i] = s2[j];
		i++;
	}

	string[i] = '\0';

	return (string);
}
