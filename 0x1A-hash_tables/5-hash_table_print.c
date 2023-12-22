#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	char flag = 0;
	if (!ht || !ht->array)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			flag = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
