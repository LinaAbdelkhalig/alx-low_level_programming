#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: the head of the list
 * @n: the int that will be added with the node
 * Return: the address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (!*head)
		*head = new;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new;
	}
	return (new);
}
