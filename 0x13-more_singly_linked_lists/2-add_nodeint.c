#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: the head of the list
 * @n: the integer to be added with the node
 * Return: the address of the new element or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;
	if(*head)
		newnode->next = *head;
	*head = newnode;
	return (newnode);
}
