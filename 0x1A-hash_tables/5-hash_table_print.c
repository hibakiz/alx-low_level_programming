#include "hash_tables.h"

/**
 * hash_table_print - retrieves a value associated with a key
 * @ht: table to retrieve value from
 *
 * Return: value associated with key, or NULL if key cannot be found
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
