#include "lists.h"
/**
 * listint_len - print the number of nodes in the list
 * @h: a pointer the element in struct
 *
 * Return: number of node in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
