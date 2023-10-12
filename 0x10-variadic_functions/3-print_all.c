#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that can print anything
 * @format: the list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	const char* a = format;

	va_start(list, format);

	while (*a != '\0')
	{
		switch(*a)
		{
			case '%':
				switch(*++a)
				{
					case 'i':
					{
						printf("%d", va_arg(list, int));
						continue;
					}
					case 'c':
					{
						printf("%c", va_arg(list, int));
						continue;
					}
					case 'f':
					{
						printf("%f", va_arg(list, double));
						continue;
					}
					case 's':
					{
						printf("%s", va_arg(list, char *));
						continue;
					}
				}
				break;
		}
	}
	va_end(list);
	printf("\n");
}
