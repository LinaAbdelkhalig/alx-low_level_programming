#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reverssed
 * Return: void
 */

void rev_string(char *s)
{
	int i, l;
	char tmp;

	for (l = 0; s[l] != '\0'; l++)
		;

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
