#include "main.h"

/**
 * _strchr - locates the first occurance of char c in string s
 * @s: the string thats going to be searched
 * @c: the char we will search
 * Return: pointer to the first occurence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
