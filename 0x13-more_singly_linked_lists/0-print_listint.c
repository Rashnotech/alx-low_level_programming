#include "lists.h"
/**
 * print_listint - Prints all element in the list and no. of nodes
 * @h: a struct pointer to the begining of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
