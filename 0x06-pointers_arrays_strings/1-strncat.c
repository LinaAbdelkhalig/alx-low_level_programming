#include "main.h"

/**
 * _strncat - similar to strcat but it will use at most n chars
 * @dest: the string it will appendt to
 * @src: the string to be appended
 * @n: the number of characters to be appended
 * Return: a pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;

	while (dest[dest_len])
		dest_len++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
