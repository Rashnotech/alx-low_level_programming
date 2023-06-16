#include "lists.h"
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

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: a struct node pointer to list
 * @idx: position of list entry point
 * @n: data to be add in the list
 * Return: an update version of the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *xx_next;
	unsigned int len, counter = 0;

	if (h == NULL)
		return (NULL);
	xx_next = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	len = get_node_size(*h);
	if (idx > len)
		return (*h);
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == len)
		add_dnodeint_end(h, n);
	else
	{
		while (counter < (idx - 1))
		{
			counter++;
			xx_next = xx_next->next;
		}
		new_node->next = xx_next->next;
		new_node->prev = xx_next->prev;
		xx_next->next = new_node;
	}
	return (*h);
}

