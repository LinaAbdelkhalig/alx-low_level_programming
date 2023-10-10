#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * length - return the length of a string
 * @string: this string
 * Return: the length
 */

int length(char *string)
{
	int len = 0;

	while (*string++)
		len++;
	return (len);
}

/**
 * copy - copies one string onto another
 * @org: the string that will be copied
 * @dest: onto here
 * Return: the copied string
 */

char *copy(char *dest, char *org)
{
	int i;

	for (i = 0; org[i]; i++)
		dest[i] = org[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new object of type dog
 * @name: sog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = (dog_t *) malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (length(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (length(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = copy(d->name, name);
	d->age = age;
	d->owner = copy(d->owner, owner);
	return (d);
}
