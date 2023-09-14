#include "main.h"
/**
 * print_diagonal - will print a diagonal line
 * @n: the number of times the characters \ will be printed
 */
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 0; space <= i; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
