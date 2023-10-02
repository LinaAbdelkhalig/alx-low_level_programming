#include "main.h"

/**
 * _strstr - locates a substring needle in string haystack
 * @haystack: the sting to be searched inside
 * @needle: the substring to be searched
 * Return: pointer to the beginning  of the located string or null
 */

char *_strstr(char *haystack, char *needle)
{
	int h = 0, n;

	while (haystack[h] != '\0')
	{
		for (n = h; haystack[n] != '\0' && needle[n - h] != '\0'; n++)
		{
			if (haystack[n] != needle[n - h])
				break;
		}
		if (needle[n - h] == '\0')
			return (haystack + h);
		h++;
	}

	return (0);
}
