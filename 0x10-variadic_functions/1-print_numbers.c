#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers :/
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(list, int), separator ? separator : "");
	}
	printf("\n");
	va_end(list);
}
