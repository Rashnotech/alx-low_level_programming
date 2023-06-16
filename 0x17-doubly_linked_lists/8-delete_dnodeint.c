#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that delete a node list at a specified index
 * @index: specific node index to be remove from list
 * Return: an integer 1 if deletion succeeded otherwise -1 for failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int len, counter = 1;
	dlistint_t *temp, *prev = NULL;

	temp = *head;
	len = get_node_size(*head);
	if (index > len || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
	}
	else
	{
		while (counter < index)
		{
			temp = temp->next;
			counter++;
		}
		if (temp->next == NULL)
		{
			prev = temp->prev;
			prev->next = NULL;
			free(temp);
			temp = NULL;
		}
		prev = temp->prev;
		prev->next = temp->next;
		temp->next->prev = prev;
		free(temp);
		temp = NULL;
	}
	return (1);
}
