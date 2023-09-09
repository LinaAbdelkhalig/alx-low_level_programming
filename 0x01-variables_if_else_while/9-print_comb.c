#include <stdio.h>
/**
 * main - this is the main function
 * Return: will return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
