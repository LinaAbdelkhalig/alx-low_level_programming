#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the head of the node
 * @index: the index of the node to be deleted
 * Return: 1 if success or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	lisint_t *node, *pre_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}	
	node = *head;
	while (node)
	{
		if (i == index)
		{
			pre_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		pre_node = node;
		node = node->next;
	}
	return (-1);
}
