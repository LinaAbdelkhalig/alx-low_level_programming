#include <stdio.h>
/**
 * main - this is the main function
 * Return: this will return 0;
 */
int main(void)
{
	int i;
	int j;
	int u;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (u = 0; u <= 9; u++)
			{
				if (i != j && j != u && i < j && j < u)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(u + '0');
					if (i + j + u != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
