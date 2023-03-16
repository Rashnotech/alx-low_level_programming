#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - a function that allocates memory using mallocc
 * @b: an unsigned integer value
 *
 * Return: status value code
 */
void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		free(NULL);
		exit(98);
	}
}
