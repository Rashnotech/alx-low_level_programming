#include "hash_tables.h"
/**
 * hash_table_print - A function that prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, x = 1;

	if (ht->size == 0)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (!x)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key,
					ht->array[i]->value);
			if (x == 1)
				x = 0;
		}
	}
	printf("}\n");
}
