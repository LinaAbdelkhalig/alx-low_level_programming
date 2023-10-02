#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments that it receives
 * @argc: the number of elements in argv
 * @argv: the array containing the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
