#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adding a new node at the begining of a list
 * @head: linked list node
 * @str: string literal to add to list
 *
 * Return: a link list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node =  malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
