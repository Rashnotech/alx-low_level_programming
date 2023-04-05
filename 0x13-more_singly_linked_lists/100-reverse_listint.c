#include "lists.h"
/**
 * reverse_listint - Reverse a linked list
 * @head: a pointer to a linked list
 *
 * Return: a linked list reversal
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (*head == NULL)
		return (NULL);
	current_node = NULL;
	next_node  = *head;
	while (*head != NULL)
	{
		*head = (*head)->next;
		next_node->next = current_node;
		current_node = next_node;
		next_node = *head;
	}
	*head = current_node;
	return (current_node);
}
