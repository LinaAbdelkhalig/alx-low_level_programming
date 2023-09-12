#include "main.h"
/**
 * print_sign - will print 1 or 0 or negative 1
 * @n: param to be tested
 * Return: will 1 oe 0 or -1
 */
int print_sign(int n);
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
