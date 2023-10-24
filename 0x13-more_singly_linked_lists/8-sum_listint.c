#include "lists.h"

/**
 * sum_listint - sums the data n in the liist
 * @head: the head of the list
 * Return: the sum of the data in the nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
