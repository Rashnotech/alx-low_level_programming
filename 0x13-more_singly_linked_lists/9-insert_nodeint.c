#include "lists.h"
int sizeoflist(listint_t *head);
/**
 * insert_nodeint_at_index - insert node element at specified index
 * @head: double ponter to list
 * @idx: index specifier for node entry
 * @n: data entry for the element node
 *
 * Return: a new list otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int counter;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	counter = sizeoflist(*head);
	if (idx > counter)
		return (NULL);
	counter = 0;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

/**
 * sizeoflist - get the size of the list
 * @head: struct pointer
 *
 * Return: the size of the list
 */
int sizeoflist(listint_t *head)
{
	unsigned int counter;

	counter = 0;
	while (head != NULL)
	{
		head = head->next;
		counter++;
	}
	return (counter);
}
