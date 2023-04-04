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
	listint_t *new_node, *temp;
	unsigned int counter = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	while (counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}
	if (counter > idx)
		return (NULL);
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
