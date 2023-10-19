#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: the head of the list
 * @str: the string that will be in the new node
 * Return: the address of the new element of null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;

	if (!head || !new_node || !str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);

	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
