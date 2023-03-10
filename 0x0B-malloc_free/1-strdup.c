#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	ptr_str = malloc(strlen(str) + 1);
	if (ptr_str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ptr_str[i] = str[i];
		i++;
	}
	ptr_str[i + 1] = '\0';
	return (ptr_str);
}
