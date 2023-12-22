#include "hash_table.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the table to be deleted
 * Return: void
 */

 void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *next;

	if (!ht || !ht->array || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
