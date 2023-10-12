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
	char *a, *s = "";
	int i = 0;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(list, double));
					break;
				case 's':
					printf("%s%s", s, va_arg(list, char *));
					if (!a)
						a = "(ni)";
					printf("%s%s", s, a);
					break;

				default:
					i++;
					continue;
			}
			s = ",";
			i++;
		}
	}
	printf("\n");
	va_end(list);

}
