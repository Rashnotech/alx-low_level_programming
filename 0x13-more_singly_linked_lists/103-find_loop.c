#include "lists.h"
/**
 * find_listint_loop - find the begining of the list in a loop
 * @head: a pointer to pointer to list
 *
 * Return: struct node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start_node, *end_node;

	start_node = end_node = head;
	if (!head || !head->next)
		return (NULL);
	while (end_node && end_node->next)
	{
		start_node = start_node->next;
		end_node = end_node->next->next;
		if (start_node == end_node)
		{
			start_node = head;
			while (start_node != end_node)
			{
				start_node = start_node->next;
				end_node = end_node->next;
			}
			return (start_node);
		}
	}
	return (NULL);
}
