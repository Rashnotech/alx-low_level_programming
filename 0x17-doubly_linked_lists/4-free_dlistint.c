#include "lists.h"
/**
 * free_dlistint - free linked list
 * @head: a struct node pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
