#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *xs_node, *last_node;

	xs_node = malloc(sizeof(list_t));
	if (!xs_node || !head)
		return (NULL);
	xs_node->str = strdup(str);
	xs_node->len = strlen(str);
	xs_node->next = NULL;
	last_node = *head;
	while (last_node && last_node->next)
		last_node = last_node->next;
	if (!last_node)
		*head = xs_node;
	else
		last_node->next = xs_node;
	return xs_node;
}
