#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: function containning the print command ?
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	void (**funky)(char *) = &f;

	(*funky)(name);
}
