#include "main.h"

/**
 * _strncpy - copies a string from src to dest
 * @dest: where the string will be copied
 * @src: the string to be copied
 * @n: the number of characters to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
