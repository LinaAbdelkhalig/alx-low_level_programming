#include "lists.h"

/**
 * _strlem - calculates the length of a str
 * @str: the string in question
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
