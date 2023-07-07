#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	if (ht->size == 0)
		return;
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			if (ht->array[i]->next != NULL)
			{
				while (ht->array[i]->next != NULL)
				{
					temp = ht->array[i]->next;
					free(ht->array[i]->next->key);
					free(ht->array[i]->next->value);
					ht->array[i]->next =
						ht->array[i]->next->next;
					free(temp);
				}
				free(ht->array[i]->next);
			}
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
