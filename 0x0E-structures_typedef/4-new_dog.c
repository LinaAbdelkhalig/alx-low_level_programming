#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new object of type dog
 * @name: sog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	char *namei = name;
	char *owneri = owner;

	if (d == NULL)
		return (NULL);
	d->name = namei;
	d->age = age;
	d->owner = owneri;
	return (d);
}
