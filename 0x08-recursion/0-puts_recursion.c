#include "main.h"

/**
 * _puts_recursion - prints out a string followed by \n
 * @s: the string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
