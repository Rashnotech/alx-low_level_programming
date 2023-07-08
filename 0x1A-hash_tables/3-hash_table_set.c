#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hashed table
 * @key: key index supplied
 * @value: corresponding value of the key
 *
 * Return: an integer 1 for success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *dict;
	unsigned long int hash_key;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	dict = malloc(sizeof(hash_node_t));
	if (!dict)
		return (0);
	hash_key = key_index((unsigned char *)key, ht->size);
	dict->key = strdup(key);
	dict->value = strdup(value);
	dict->next = NULL;
	if (ht->array[hash_key] == NULL)
		ht->array[hash_key] = dict;
	else
	{
		if (strcmp(ht->array[hash_key]->key, key) == 0)
			ht->array[hash_key] = dict;
		else
		{
			dict->next = ht->array[hash_key];
			ht->array[hash_key] = dict;
		}
	}
	return (1);
}
