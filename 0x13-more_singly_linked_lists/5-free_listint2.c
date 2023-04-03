#include "lists.h"
/**
 * free_listint2 - Free an allocate memory
 * @head: a struct pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
