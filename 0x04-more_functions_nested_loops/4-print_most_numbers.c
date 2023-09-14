#include "main.h"
/**
 * print_most_numbers - wil print most numbers
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{i
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
