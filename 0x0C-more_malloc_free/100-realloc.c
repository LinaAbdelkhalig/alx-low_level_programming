#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory space already allocated
 * @old_size: the size of the memory space previously allocated
 * @new_size: the new size in bytes of the memory block
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	if (new_size > old_size)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);

		for (i = 0; i < new_size && i < old_size; i++)
			*((char *)new + i) = *((char *)ptr + i);
		free(ptr);

	}

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (new);
}
