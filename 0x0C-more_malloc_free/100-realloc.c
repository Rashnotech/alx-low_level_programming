#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _realloc - reallocate a new block
 * @ptr: a block of memory
 * @old_size: previous memory allocated
 * @new_size: New memory to be allocated
 *
 * Return: reallocated memory or old_memory otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		memcpy(new_mem, ptr, old_size);
		free(ptr);
	}
	return (new_mem);
}
