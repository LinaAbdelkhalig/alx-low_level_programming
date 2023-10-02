#include "main.h"

/**
 * _strcat - adds string 2 to string 1
 * @dest: pointer to the destination string
 * @src: pointer to the s string to be appended to dest
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	dest_len = 0;

	while (dest[dest_len])
		dest_len++;

	for (src_len = 0 ; src[src_len]; src_len++)
		dest[dest_len++] = src[src_len];

	return (dest);
}
