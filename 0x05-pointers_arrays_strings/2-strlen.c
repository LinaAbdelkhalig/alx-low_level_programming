#include "main.h"
/**
 * _strlen - returns the length of a sring
 * @s: points to the string that we will get the length of
 * Return: returns an int
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
