#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum change coins
 * @argc: the number of elements in the argv
 * @argv: the array containing the arguments of main
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, money, min_coins = 0;
	int coin_cat[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (money >= coin_cat[i])
		{
			min_coins += money / coin_cat[i];
			money = money % coin_cat[i];
			if (money % coin_cat[i] == 0)
				break;
		}
	}
	printf("%d\n", min_coins);

	return (0);
}
