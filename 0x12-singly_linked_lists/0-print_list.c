#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: the list in question
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
