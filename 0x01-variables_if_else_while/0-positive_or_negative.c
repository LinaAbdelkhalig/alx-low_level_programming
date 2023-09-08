#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 * Return: will return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%lu is positive", n);
	else
		if (n < 0)
			printf("%lu is negative", n);
		else
			printf("%lu is zero", n);
	return (0);
}
