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
	dlistint_t *new_node, *xx_next, *temp;
	unsigned int len;

	xx_next = *h;
	len = get_node_size(*h);
	if (idx > len)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);
	else
	{
		while (idx != 1)
		{
			xx_next = xx_next->next;
			idx--;
		}
		if (xx_next->next == NULL)
			add_dnodeint_end(h, n);
		else
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node)
			{
				new_node->n = n;
				temp = xx_next->next;
				xx_next->next = new_node;
				temp->prev = new_node;
				new_node->next = temp;
				new_node->prev = xx_next;
			}
		}
	}
	return (*h);
}

