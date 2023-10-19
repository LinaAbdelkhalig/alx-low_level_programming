#include "lists.h"

/**
 * _strlen - calculates the length of a string
 * @str: the string
 * Return: the the length of the string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * print_list - prints all the elements of a list
 * @h: the list in question
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		counter++;
	}
	return (counter);
}
