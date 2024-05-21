nclude <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 * 
 * Return: A pointer to the first node where value is located, or NULL if value is not present in list or if list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump;
	listint_t *prev, *next;

	if (!list)
		return (NULL);

	jump = sqrt(size);
	prev = list;
	next = list;
	while (next->index < size - 1 && next->n < value)
	{
		prev = next;
		for (size_t i = 0; i < jump && next->next; i++)
			next = next->next;
		printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, next->index);
	while (prev->index <= next->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
