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
	unsigned int len, counter = 1;
	dlistint_t *temp, *prev = NULL;

	temp = *head;
	len = get_node_size(*head);
	if (index > len || head == NULL)
		return (-1);
	if (index == 0)
	{	temp = *head;
		if (*head != NULL)
			*head = (*head)->next;
		free(temp);
		temp = NULL;
		if (*head != NULL)
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
		}
		else
		{
			prev = temp->prev;
			prev->next = temp->next;
			temp->next->prev = prev;
		}
		free(temp);
		temp = NULL;
	}
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

