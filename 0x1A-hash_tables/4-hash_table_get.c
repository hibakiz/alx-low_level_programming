#include "hash_tables.h"

/**
 * hash_table_get - get the index of a key
 * @ht: the hash table
 * @key: the key to add
 * Return: the value with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int index;
	hash_node_t *node;

	if (!ht || !ht->array || !ht->size ||
	    !key || strlen(key) == 0)
		return (NULL);


	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;

	}

	return (NULL);
}
