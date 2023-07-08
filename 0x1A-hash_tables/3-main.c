#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "Holberton", "is cool");
    hash_table_set(ht, "Holberton", "is soooo coooool");
    hash_table_set(ht, "Holberton", "is awesome");
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "lapping");
    hash_table_set(ht, "mentioner", "drama");
    return (EXIT_SUCCESS);
}
