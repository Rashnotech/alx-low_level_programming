#include "hash_tables.h"
/**
 * hash_djb2 - a function that implement a hashing algorithm (djb2)
 * str: an unsigned character pointer
 *
 * Return: an long integer of supplied character
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h_val;
	int alpha;

	h_val = 5381;
	for (; *str != '\0'; str++)
	{
		alpha = *str;
		h_val *= 33;
		h_val += alpha;
	}
	return (h_val);
}
