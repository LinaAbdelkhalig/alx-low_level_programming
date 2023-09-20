#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the sting to be encoded
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	char keys[] = "aAeEoOtTlL";
	char values[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
			if (str[i] == keys[j])
				str[i] = values[j];
	}

	return (str);
}
