#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at a specific index
 * @head: a struct node of a list
 * @index: position of a list to be pointed
 * Return: a list of specified node found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	temp = head;
	while (temp && temp->next)
	{
		counter++;
		temp = temp->next;
	}
	if (index > counter)
		return (NULL);
	counter = 0;
	while (counter != index)
	{
		counter++;
		head = head->next;
	}
	return (head);
}
