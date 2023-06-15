#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a list
 * @head: a struct node pointer to the list
 * @n: data to enter the list
 * Return: an update linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
