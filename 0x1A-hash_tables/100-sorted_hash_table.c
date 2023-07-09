#include "hash_tables.h"
/**
 * shash_table_create - A function that create a sorted hash table
 * @size: size of the hash table to be created
 * Return: a struct hash array
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(shash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	table->shead = NULL;
	table->stail = NULL;
	for (; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}

/**
 * shash_table_set - a function that set a key an an associated value
 * @ht: hash table
 * @key: key of the corresponding value
 * @value: value of the corresponding key
 *
 * Return: an integer 1 if success otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *dict;
	unsigned long int hash_key;

	if (ht == NULL || strlen(key) == 0)
		return (0);
	dict = malloc(sizeof(shash_node_t));
	if (!dict)
		return (0);
	dict->key = strdup(key);
	dict->value = strdup(value);
	dict->next = NULL;
	dict->sprev = NULL;
	dict->snext = NULL;
	hash_key = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash_key] == NULL)
	{
		ht->array[hash_key] = dict;
		if (ht->shead == NULL && ht->stail == NULL)
			ht->shead = dict;
		else
			addsort_node(ht, dict);	
	}
	else
	{
		if (strcmp(ht->array[hash_key]->key, key) == 0)
		{
			free(ht->array[hash_key]->value);
			ht->array[hash_key]->value = strdup(value);
			free(dict->value);
			free(dict->key);
			free(dict);
		}
		else
		{
			dict->next = ht->array[hash_key];
			ht->array[hash_key] = dict;
			addsort_node(ht, dict);
		}
	}
	return (1);
}

/**
 * shash_table_get - a function that get the key and the corresponding value
 * @ht: hash table
 * @key: hash table value getter
 * Return: value character from the hash table
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hash_key;
	shash_node_t *node;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);
	hash_key = key_index((unsigned char *)key, ht->size);
	node = ht->array[hash_key];
	if (node->next == NULL)
		return (NULL);
	return (node->value);
}

/**
 * shash_table_print_print - a function that print the element in hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{	
	unsigned long int i = 0, n = 0;
	shash_node_t *p;

	if (ht == NULL)
		return;
	if (ht->size == 0)
		printf("{}\n");
	else
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			p = ht->array[i];
			if (p != NULL)
			{
				if (n)
					printf(", ");
				printf("'%s': '%s'", p->key, p->value);
				n = 1;
			}
			while (p != NULL && p->next != NULL)
			{
				if (n)
					printf(", ");
				printf("'%s': '%s'", p->key, p->value);
				p->next = p->next->next;
				n = 1;
			}
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - a function that delete hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *temp, *p;

	if (ht == NULL)
		return;
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			if (ht->array[i]->next != NULL)
			{
				p = ht->array[i]->next;
				while (p != NULL)
				{
					temp = p;
					free(p->key);
					free(p->value);
					p = p->next;
					free(temp);
				}
			}
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * addsnode_begin - add node to the snode pointer
 * @head: head pointer
 * @dict: dictionary structure
 */
void addsort_node(shash_table_t *ht, shash_node_t *dict)
{
	shash_node_t *node;

	node = ht->shead;
	if (strcmp(dict->key, ht->shead->key) <= 0)
	{
		dict->snext = ht->shead;
		ht->shead->sprev = dict;
		ht->shead = dict;
	}
	else
	{
		while (node->snext != NULL && strcmp(dict->key,
					node->snext->key) > 0)
			node = node->snext;
		dict->snext = node->snext;

		if (node->snext != NULL)
			node->snext->sprev = dict;
		node->snext = dict;
		dict->sprev = node;
	}
}

/**
 * shash_table_print_rev - a function that print the hash tables in reverse
 * order
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int n = 0;
	shash_node_t *tail;

	if (ht == NULL)
		return;
	tail = shash_table_rev(ht);
	printf("{");
	while (tail != NULL)
	{
		if (n)
			printf(", ");
		printf("'%s': '%s'", tail->key, tail->value);
		tail = tail->snext;
		n = 1;
	}
	printf("}\n");
}

/**
 * shash_table_rev - a function that reverse the element of a hash table
 * @ht: hash table
 * Return: reversed hash table
 */
shash_node_t *shash_table_rev(const shash_table_t *ht)
{
	shash_node_t *next, *tail, *prev = NULL;

	if (ht == NULL)
		return (NULL);
	tail = ht->shead;	
	while (tail != NULL)
	{
		next = tail->next;
		tail->next = prev;
		prev = tail;
		tail = next;
	}
	tail = prev;
	return (tail);
}
