#include <stdio.h>
/**
 * main - this is the main function
 * Return: this will return 0;
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
