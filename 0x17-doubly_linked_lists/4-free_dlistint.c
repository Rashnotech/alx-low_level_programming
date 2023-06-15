#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: a struct node for list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	head = head->next;
	free(temp);
	temp = NULL;
}
