#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: an int that is =, < , > 0
 */

int _strcmp(char *s1, char *s2)
{
	int val = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			val = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (val);
}
