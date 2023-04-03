#include "lists.h"
/**
 * free_listint - free the nodelist
 * @head: a struct pointer to element
 */
void free_listint(listint_t *head)
{
	head->n = 0;
	free(head->next);
	free(head);
}
