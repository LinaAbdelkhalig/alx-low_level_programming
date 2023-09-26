#include "main.h"

/**
 * _strpbrk - locates the first occurence of a char from sccept in s
 * @s: the string to be searched
 * @accept: the bytes wwe will be searching for in s
 * Return: pointer to the byte in s that is a match or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *point;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				point = &s[i];
				return (point);
			}
			j++;
		}
		i++;
	}
	return (0);
}
