#include "main.h"
/**
 * print_diagonal - will print a diagonal line
 * @n: the number of times the characters \ will be printed
 */
void print_diagonal(int n)
{
	int pn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pn = 1; pn <= n; pn++)
		{
			for (space = 1; space <= pn; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
