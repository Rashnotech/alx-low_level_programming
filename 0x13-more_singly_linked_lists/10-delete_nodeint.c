#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index specified
 * @head: double pointer to linked list
 * @index: index specifier for deletion
 *
 * Return: an integer value 1 if it succeed othewise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next_node;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (counter < index - 1)
	{
		temp = temp->next;
		counter++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);
	return (1);
}
