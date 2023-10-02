#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - receives two int as arg and prints the mul result
 * @argc: the number of elements in argv
 * @argv: an array of the arguments passed to the function as strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
