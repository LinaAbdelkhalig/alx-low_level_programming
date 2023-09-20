#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the sting to be encoded
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	char *pointer = str;

	while (*pointer != '\0')
	{
		if (*ptr == 'a' || *ptr == 'A')
			*ptr = '4';
		else if (*ptr == 'e' || *ptr == 'E')
			*ptr = '3';
		else if (*ptr == 'o' || *ptr == 'O')
			*ptr = '0';
		else if (*ptr == 't' || *ptr == 'T')
			*ptr = '7';
		else if (*ptr == 'l' || *ptr == 'L')
			*ptr = '1';

		pointer++;
	}

	return (str);
}
