#include "main.h"
#include <stdio.h>

/**
 * is_lower - checks if the char is lowercase
 * @c: the char to be checked
 * Return: 1 or 0
 */

int is_lower(char c)
{
	return (c <= 122 && c >= 97);
}

/**
 * is_seperator - checks if the char is a seperator
 * @c: the character to be checked
 * Return: 0
 */

int is_seperator(char c)
{
	int i;
	char seperator[] = "\t\n,.?!\"{}()";

	for (i = 0; i < 12; i++)
		if (c == seperator[i])
			return (1);

	return (0);

}

/**
 * cap_string - capitalizes the words in a string
 * @s: the string to be capitalized
 * Return: pointer to a string
 */

char *cap_string(char *s)
{
	char *pointer = s;
	int found_sep = 1;

	while (*s)
	{
		if (is_seperator(*s))
		{
			found_sep = 1;
		}
		else if (is_lower(*s) && found_sep)
		{
			*s -= 32;
			found_sep = 0;
		}
		else
			found_sep = 0;
		s++;
	}

	return (pointer);
}
