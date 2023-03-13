#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copy a string given as a parameter
 * @str: string literal
 *
 * Return: characters otherwise NULL
 */
char *_strdup(char *str)
{
	char *ptr_str;
	int i;

	i = 0;
	if (str == NULL)
		return (NULL);
	ptr_str = malloc(sizeof(str) + 1);
	if (ptr_str != NULL)
	{
		while (*str != '\0')
		{
			ptr_str[i] = str[i];
			i++;
		}
		ptr_str[i] = '\0';
		return (ptr_str);
	}
	return (NULL);
}
