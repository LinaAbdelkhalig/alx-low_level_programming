#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint
 * @head: the header of the list
 * Return: the head of the nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int hn;

	if (!head || *head)
		return (0);

	node = (*head)->next;
	hn = (*head)->n;
	free(*head);
	*head = node;
	return (hn);
}
