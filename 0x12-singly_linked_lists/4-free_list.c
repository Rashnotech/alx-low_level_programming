#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_list - free single linked list
 * @head: node
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->str);
	free_list(head->next);
	free(head);

}
