#include "main.h"

/**
 * rot13 - will encode strings using rot13
 * @string: the string to be encoded
 * Return: pointer to the encoded string
 */

char *rot13(char *string)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (string[i] == alpha[j])
			{
				string[i] = rot[j];
			}
		}
	}

	return (string);
}
