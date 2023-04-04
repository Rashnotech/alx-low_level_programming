#include "lists.h"
/**
 * sum_listint - Sum all the data in a linked list
 * @head: a struct pointer
 *
 * Return: sum of the data in list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
