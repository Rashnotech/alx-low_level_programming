#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate two strings together
 * @s1: first string
 * @s2: second string
 *
 * Return: character value otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr_str;
	int i;

	i = 0;
	if (s1 == NULL && s2 == NULL)
		return ("");
	ptr_str = malloc(sizeof(s1) + sizeof(s2) + 1);
	if (ptr_str == NULL)
		return (NULL);
	for (; s1; i++)
		ptr_str[i] = s1[i];
	while (*s2 != '\0')
	{
		ptr_str[i] = s2++;
		i++;
	}
	ptr_str[i] = '\0';
	return (ptr_str);
}
