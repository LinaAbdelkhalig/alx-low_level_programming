#include "main.h"
/**
 * print_line - will print a line on the terminal
 * @n: the number of times the line will be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
