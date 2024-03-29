#include "hash_tables.h"
/**
 * hash_table_create - a function that create a hash table
 * @size: the size of the table to be created
 *
 * Return: a struct type hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
