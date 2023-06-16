#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that
 * delete a node list at a specified index
 * @index: specific node index to be remove from list
 * @head: a struct node pointer
 * Return: an integer 1 if deletion succeeded otherwise -1 for failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len;
	dlistint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	len = get_node_size(*head);
	if (index > len)
		return (-1);
	temp = *head;
	if (index == 0)
	{	*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (index > 0)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}
	if (temp == NULL)
		return (-1);
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}


/**
 * get_node_size - Get the size of a struct node
 * @head: struct node pointer of list
 * Return: an integer of node size
 */
int get_node_size(dlistint_t *head)
{
	dlistint_t *temp;
	int counter = 0;

	temp = head;
	while (temp && temp->next)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}

