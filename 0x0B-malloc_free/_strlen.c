#include "main.h"

/**
 * _strlen - returns the length of a string
 * @string: the string whic length eill be calculated
 * Return: the length of a string
 */

int _strlen(char *string)
{
	int size;

	for (size = 0; string[size] != '\0'; size++)
		;

	return (size);
}
