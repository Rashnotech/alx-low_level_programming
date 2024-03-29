#include "lists.h"
/**
 * add_nodeint_end - add element to the end of node
 * @head: struct pointer to the start of node
 * @n: element to be add to new node
 *
 * Return: New struct element in node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	last_node = *head;
	while (last_node && last_node->next)
		last_node = last_node->next;
	if (!last_node)
		*head = new_node;
	else
		last_node->next = new_node;
	return (new_node);
}
