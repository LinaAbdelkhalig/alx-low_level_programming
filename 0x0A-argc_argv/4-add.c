#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: the number of elements in argv
 * @argv: the array containing the string arg passed to the function
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		c = argv[i];
		if (*c < '0' || *c > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
