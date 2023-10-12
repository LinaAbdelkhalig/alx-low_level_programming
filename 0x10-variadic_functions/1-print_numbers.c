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
	unsigned int i = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);

	while (i--)
	{
		printf("%d%s", va_arg(list, int), i ? (separator ? separator : "") : "\n");
	}
	va_end(list);
}
