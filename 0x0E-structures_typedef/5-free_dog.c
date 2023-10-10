#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees dog
 * @d: you need to free it
 * Return: void
 */

void free_dog(dog_t *d);
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if(d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
