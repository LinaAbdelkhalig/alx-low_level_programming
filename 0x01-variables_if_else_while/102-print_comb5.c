#include <stdio.h>
/**
 * main - this is the main functino
 * Return: will return 0
 */
int main(void)
{
	int i = 0 , j;

	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (j != i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++
	}
	putchar('\n');

	return (0);
}
