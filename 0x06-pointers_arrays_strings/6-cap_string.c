#include "main.h"

/**
 * is_lower - checks if the char is lowercase
 * @c: the char to be checked
 * is_seperator - checks if the current character is a seperator
 * @c: the char to be checked
 * cap_string - capitalizes thw words in atring
 * @string: the string to be capitalized
 * Return: a pointer to the capitalized string
 */

int is_lower(char c)
{
	return (c <= 122 && c >= 97);
}

int is_seperator(char c)
{
	int i;
	char seperator[] = "\t\n,.?!\"{}()";

	for (i = 0; i < 12; i++)
		if (c == seperator[i])
			return (1);

	return (0);

}

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
