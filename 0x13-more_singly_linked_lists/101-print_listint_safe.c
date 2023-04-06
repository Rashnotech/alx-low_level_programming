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
	const listint_t *check, *temp;

	if (!head || !head->next)
		return (0);
	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		counter++;
		if (temp > temp->next)
		{
			temp = temp->next;
		}
		else
		{
			check = temp->next;
			printf("->[%p] %d\n", (void *)check, check->n);
			break;
		}
	}
	return (counter);
}
