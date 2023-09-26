#include "main.h"

/**
 * _strspn - calculates the bytes in s that consist from accept
 * @s: the string to be searched
 * @accept: the string containing the bytes we search for in s
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_ind, accept_ind;

	for (s_ind = 0; s[s_ind] != '\0'; s_ind++)
		for (accept_ind = 0; s[s_ind] != accept[accept_ind]; accept_ind++)
		{
			if (accept[accept_ind] == '\0')
				return (s_ind);
		}

	return (s_ind)
}
