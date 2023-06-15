#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: a struct node pointer to list
 * @n: data to update the list
 * Return: an updated version of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	current = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (current && current->next)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	return (*head);
}
