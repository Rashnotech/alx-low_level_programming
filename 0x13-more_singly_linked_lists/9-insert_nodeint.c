#include "lists.h"
/**
 * insert_nodeint_at_index - insert node element at specified index
 * @head: double ponter to list
 * @idx: index specifier for node entry
 * @n: data entry for the element node
 *
 * Return: a new list otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *last_node;
	unsigned int counter = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !*head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	last_node = *head;
	while (last_node && counter >= idx)
	{
		last_node = last_node->next;
		counter++;
	}
	if (!last_node)
		*head = new_node;
	else
		last_node->next = new_node;
	return (new_node);
}
