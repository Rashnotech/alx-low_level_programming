#include "lists.h"
/**
 * add_nodeint - add new element to begining of the list
 * @head: a struct pointer to the start of the list
 * @n: data to add in the node
 *
 * Return: single linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
