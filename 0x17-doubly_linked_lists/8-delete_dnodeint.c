#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that delete a node list at a specified index
 * @index: specific node index to be remove from list
 * Return: an integer 1 if deletion succeeded otherwise -1 for failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int len;
	dlistint_t *temp;

	temp = *head;
	len = get_node_size(*head);
	if (index > len)
		return (-1);
	if (index == 0)
	{

	}
	return (1);
}
