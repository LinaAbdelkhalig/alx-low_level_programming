#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: the head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *mode;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		mode = node;
		node = node->next;
		free(mode);

	}
	*head = NULL;
}
