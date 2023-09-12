#include "main.h"
/**
 * _islower -  checks if char is lower case
 * @c: parameter to be checked
 * Return: 1 or 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
