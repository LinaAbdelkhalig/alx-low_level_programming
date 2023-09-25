#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @n: the number of bytes to be copied
 * @src: where we will copy from
 * @dest: where we will copy to
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
