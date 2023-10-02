#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numver of arguments passed onto it4
 * @argc: the number of arguments passed into the program
 * @argv: the array containing the arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
