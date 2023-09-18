#include "main.h"

/**
 * _strcpy - will copy a string from src to dest
 * @dest: the array into which the string will be copied
 * @src: the string that will be copied
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
