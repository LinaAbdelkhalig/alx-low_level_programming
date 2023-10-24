#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint
 * @head: the head of the list
 * @index: the index of the node;
 * Return: the node if found or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}
