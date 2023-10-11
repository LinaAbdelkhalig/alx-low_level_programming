#include "3-calc.h"
#include <stdio.h>

/**
 * main - calculate
 * @argc: the number of args passed
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int), f, s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = atoi(argv[1]);
	s = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if(s == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(f, s));

	return (0);
}
