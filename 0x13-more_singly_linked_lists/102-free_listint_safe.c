#include "lists.h"
/**
 * free_listint_safe - Free up memory of linked list
 * @h: a pointer to pointer variable
 *
 * Return: the size of node free'ed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;

	if (!h || !*h)
		return (counter);
	while (*h)
	{
		if ((*h) - (*h)->next > 0)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
			counter++;
		}
		else
		{
			free(*h);
			*h = NULL;
			counter++;
			break;
		}
	}
	*h = NULL;
	return (counter);
}
