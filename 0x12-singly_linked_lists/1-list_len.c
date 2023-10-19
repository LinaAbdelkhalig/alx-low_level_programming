#include "lists.h"

/**
 * list_len - returns the numver of elements in the list
 * @h: the head of the list
 * Return: the number of elements inn the list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
