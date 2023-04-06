#include "lists.h"
/**
 * print_listint_safe - Print node list in safe
 * @head: a pointer to struct
 *
 * Return: an unsigned integer of element contained in node otherwise exit 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;

	if (!head || !head->next)
		return (0);
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (counter);
}
