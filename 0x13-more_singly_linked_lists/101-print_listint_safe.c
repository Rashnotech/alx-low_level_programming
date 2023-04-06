#include "lists.h"
#include <stdbool.h>
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
		exit(98);
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
			counter++;
			head = head->next;
			printf("->[%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (counter);
}
