#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the head of the list
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	if (!head)
		return;
	current = head;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
