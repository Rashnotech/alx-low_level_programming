#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_list - print a linked list
 * @h: a struct pointer with cons
 *
 * Return: return struct list of size_t
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != (list_t *) 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
