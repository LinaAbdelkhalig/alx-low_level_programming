#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string printed between the strings
 * @n: the nuumber of arguments passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list list;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	while (--i)
	{
		printf("%s", va_arg(list, char *) ? va_arg(list, char *) : "(nil)");
		if (i)
			printf("%s", separator ? separator : "");
		else
			printf("\n");
	}

	va_end(list);
}
