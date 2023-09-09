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
		putchar(',');
		putchae(' ');
	}

	return (0);
}
