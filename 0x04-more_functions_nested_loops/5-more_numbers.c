#include "main.h"
/**
 * more_numbers - will print 10 lines of numbers
 * Return: void
 */
void more_numbers(void)
{
	int row, count, num;

	for (row = 0; row < 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + '0');
				num = count % 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
