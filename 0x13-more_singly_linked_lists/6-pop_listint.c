#include "lists.h"
/**
 * pop_listint - pop the first element on the list
 * @head: a double pointer to the struct
 *
 * Return: an integer value 0 or pop node
 */
int pop_listint(listint_t **head)
{
	listint_t *next_val;
	int pop_val;

	if (*head == NULL)
		return (0);
	pop_val = (*head)->n;
	next_val = (*head)->next;
	free(*head);
	*head = next_val;
	return (pop_val);
}
