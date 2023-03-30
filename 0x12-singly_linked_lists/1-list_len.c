#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * list_len - find the number of element in a list
 * @h: struct pointer
 *
 * Return: number of length size_t type
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != (list_t *) 0)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
