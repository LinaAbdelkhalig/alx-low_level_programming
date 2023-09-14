#include "main.h"
/**
 * 0-isupper.c - checkes wether the char is upper or lower
 * @c: the characcter to be tested
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
