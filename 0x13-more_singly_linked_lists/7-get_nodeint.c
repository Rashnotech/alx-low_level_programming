#include "lists.h"
/**
 * get_nodeint_at_index - get a node at the specified index
 * @head: pointer to the start of node
 * @index: specified index
 *
 * Return: a struct type element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head && counter < index)
	{
		head = head->next;
		counter++;
	}
	return (head ? head : NULL);
}
