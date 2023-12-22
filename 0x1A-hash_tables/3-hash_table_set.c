#include "hash_tables.h"

/**
 * node_create - creates a hash node
 * @key: the key of the node
 * @value: the value of the node
 * Return: pointer to the new node or NULL
 */

hash_node_t *node_create(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the table to which the element will be added
 * @key: the key of the elemenet
 * @value: the value of the element
 * Return: 1if success or 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *new;
	unsigned long int index;
	char *new_val;

	if (!ht || !ht->array || ht->size == 0 || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_val = strdup(value);
			if(!new_val)
				return (0);
			free(current->value);
			current->value = new_val;
			return (1);
		}
		current = current->next;
	}
	new = node_create(key, value);
	if(!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
