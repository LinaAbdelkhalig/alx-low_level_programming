#include "main.h"

/**
 * string_toupper - will convert lower case letters to uppercase
 * @lstring: the string to be convereted
 * Return: pointer to the converted string
 */

char *string_toupper(char *lstring)
{
	int i;

	for (i = 0; lstring[i] != '\0'; i++)
	{
		if (lstring[i] <= 122 && lstring[i] >= 97)
			lstring[i] -= 32;
	}

	return (lstring);
}
