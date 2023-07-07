#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key
 * @key: hashed key
 * @size: the size of the array of the hash table
 *
 * Return: an unsigned int of key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long hash_key;

	hash_key = hash_djb2(key);
	hash_key %= size;
	return (hash_key);
}
