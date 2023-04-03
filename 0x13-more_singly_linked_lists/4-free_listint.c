#include "lists.h"
/**
 * free_listint - free the nodelist
 * @head: a struct pointer to element
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
