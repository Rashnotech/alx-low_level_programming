#include "search_algos.h"
#include <math.h>
/**
 * jump_list - a function that searches for a value
 * @list: a pointer to the head of the list
 * @size: the number of node in list
 * @value: Integer to search for
 * Return: pointer to the found node
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev = 0, i = 0;
	listint_t *tmp;

	if (!list || size == 0)
		return (NULL);
	step = sqrt(size);
	prev = 0;
	while (list)
	{
		if ((i % step == 0 && i != 0) || i == size - 1)
		{
			printf("Value checked at index [%lu] = [%d]\n", i, list->n);
			if (list->n >= value)
				break;
		}
		if (list->index % step == 0)
		{
			tmp = list;
			prev = list->index;
		}
		list = list->next;
		i++;
	}
	if (i >= size)
		i = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
	if (list == NULL)
		return (NULL);
	for (; tmp->index < i; tmp = tmp->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
		if (tmp->n == value)
			return (tmp);
	}
	return (NULL);
}
