#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory using malloc
 * @nmemb: an array of memory bytes
 * @size: size of memory to be allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	void *mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	memset(mem, 0, nmemb * size);
i	return (mem);
}
