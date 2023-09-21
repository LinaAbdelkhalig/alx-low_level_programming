#include "main.h"

/**
 * infinite_add - will add two number
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the buffer the function will use to store the result
 * @size_r: the size of the buffer
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0, k, d1, d2, co = 0, larger;

	while (n1[len_n1] != '\0')
		len_n1++;
	while (n2[len_n2] != '\0')
		len_n2++;
	if (len_n1 > len_n2)
		larger = len_n1;
	else
		larger = len_n2;
	if ((larger + 1) > size_r)
		return (0);
	r[larger] = '\0';
	for (k = larger - 1; k >= 0; k--)
	{
		len_n1--;
		len_n2--;
		if (len_n1 >= 0)
			d1 = n1[len_n1] - '0';
		else
			d1 = 0;
		if (len_n2 >= 0)
			d2 = n2[len_n2] - '0';
		else
			d2 = 0;

		r[k] = (d1 + d2 + co) % 10 + '0';
		co = (d1 + d2 + co) / 10;
	}
	if (co == 1)
	{
		r[larger + 1] = '\0';
		if (larger + 2 > size_r)
			return (0);

		while (larger-- >= 0)
			r[larger + 1] = r[larger];
		r[0] = co + '0';
	}
	return (r);
}
