#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog struct
 * @d: the dog to be printed
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) == NULL ? "(nil)" : (d->name));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner) == NULL ? "(nil)" : (d->owner));
	}
}
