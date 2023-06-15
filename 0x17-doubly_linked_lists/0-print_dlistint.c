#include "lists.h"
/**
 * print_dlistint - print element in a doubly linked list
 * @h: a struct node for the list
 * Return: an unsigned integer of number of element
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
