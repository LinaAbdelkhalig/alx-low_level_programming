#include "main.h"

/**
 * _strpbrk - locates the first occurence of a char from sccept in s
 * @s: the string to be searched
 * @accept: the bytes wwe will be searching for in s
 * Return: pointer to the byte in s that is a match or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] != accept[j])
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}
	}
	return (i);
}
