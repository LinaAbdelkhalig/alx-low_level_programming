#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of the list
 * @head: the head of the list
 * @str: the string to be put in the new node
 * Return: the addresss of the new element or null if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (NULL);
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
