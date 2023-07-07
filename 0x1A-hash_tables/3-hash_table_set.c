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
	hash_node_t *hash;
	unsigned long int hash_key;

	if (ht == NULL || key == NULL || strlen(key) == 0 || space(key) == 1)
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
		hash = ht->array[hash_key];
		if (hash->next == NULL)
			hash->next = dict;
		else
		{
			dict->next = hash->next;
			hash->next = dict;
		}
	}
	return (1);
}

/**
 * space - check for space or tab in a string
 * @str: string of character supplied
 *
 * Return: an integer value of 0 otherwise 1
 */
int space(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if str[i] == ' ' || str[i] == '\t')
			return (1);
	}
	return (0);
}
