#include "lists.h"
/**
 * sum_dlistint - sum of all the data
 * @head: a struct node of list
 * Return: sum of the element in node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
