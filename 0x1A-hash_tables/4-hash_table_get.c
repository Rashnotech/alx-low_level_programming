#include "hash_tables.h"
/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key associated with value
 *
 * Return: a pointer to the associated key otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_key;

	if (ht->size == 0 || strlen(key) == 0 || ht == NULL || key == NULL)
		return (NULL);
	hash_key = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash_key] == NULL)
		return (NULL);
	return (ht->array[hash_key]->value);
}
