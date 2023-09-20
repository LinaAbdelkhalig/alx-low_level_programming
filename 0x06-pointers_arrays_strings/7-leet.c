#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the sting to be encoded
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	char *pointer = str;
	char keys[] = {'A', 'E', 'O', 'T', 'L'};
	char values[] = {'4', '3', '0', '7', '1'};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(keys); i++)
		{
			if (*str == keys[i] || *str == keys[i] + 32)
				*str = 48 + values[i];
		}
		str++;
	}

	return (pointer);
}
