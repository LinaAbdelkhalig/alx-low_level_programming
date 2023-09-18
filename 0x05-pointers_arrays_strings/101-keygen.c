#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program to generate a random password
 * Return: 0
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));

	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
