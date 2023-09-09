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
		for (j = 0; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 && j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
