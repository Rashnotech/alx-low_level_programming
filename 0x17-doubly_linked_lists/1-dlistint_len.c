#include "lists.h"
/**
 * dlistint_len - Traverse an array to find the length
 * @h: a struct node pointer of list
 * Return: Length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
