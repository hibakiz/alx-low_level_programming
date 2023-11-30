#include "hash_tables.h"

/**
 * hash_table_set - get the index of a key
 * @ht: the hash table
 * @key: the key to add
 * @value: the value associated with the key
 * Return: 1 in succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *prev_value;
	hash_node_t *node, *new;

	/*colision is in the same index*/
	if (!ht || !ht->array || !ht->size ||
	    !key || strlen(key) == 0 || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
		{
			prev_value = strdup(value);
			if (prev_value == NULL)
				return (0);
			free(node->value);
			node->value = prev_value;
			return (1);
		}
		node = node->next;
	}
	new = new_node(key, value);
	if (new == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

/**
 * new_node - helper to create a new node
 * @key: the key to add
 * @value: the value associated with the key
 * Return: address of the new node
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
