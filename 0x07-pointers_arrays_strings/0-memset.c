#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with b
 * @s: the pointer to the memory area to be filled
 * @b: the byte constant used to fil the memory area
 * @n: the number of bytes that will be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
