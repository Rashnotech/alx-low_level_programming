#include "hash_tables.h"
/**
 * hash_table_print - A function that prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, x = 1;
	hash_node_t *node;

	if (ht == NULL)
		return;
	if (ht->size == 0)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL && ht->array[i]->next == NULL)
		{
			if (!x)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key,
					ht->array[i]->value);
			if (x == 1)
				x = 0;
		}
		else if (ht->array[i] != NULL && ht->array[i]->next != NULL)
		{
			node = ht->array[i];
			printf(", ");
			while (node->next != NULL)
			{
				printf("'%s': '%s', ", node->next->key,
							node->next->value);
				node->next = node->next->next;
				if (x == 1)
					x = 0;
			}
			printf("'%s': '%s'", node->key, node->value);
		}
	}
	printf("}\n");
}
