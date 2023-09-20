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
		if (*pointer == 'a' || *pointer == 'A')
			*pointer = '4';
		else if (*pointer == 'e' || *pointer == 'E')
			*pointer = '3';
		else if (*pointer == 'o' || *pointer == 'O')
			*pointer = '0';
		else if (*pointer == 't' || *pointer == 'T')
			*pointer = '7';
		else if (*pointer == 'l' || *pointer == 'L')
			*pointer = '1';

		pointer++;
	}

	return (str);
}
