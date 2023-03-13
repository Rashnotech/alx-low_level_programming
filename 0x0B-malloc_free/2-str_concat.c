#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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

	ptr_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (ptr_str == NULL)
		return (NULL);
	if (s1)
	{
		for (i = 0; *s1 != '\0' && *s1 != NULL; i++)
			ptr_str[i] = s1[i];
		ptr_str[i] = "";
	}
	if (s2)
	{
		while (*s2 != '\0' && *s2 != NULL)
		{
			ptr_str[i] = *s2++;
			i++;
		}
		ptr_str[i] = " ";
	}
	ptr_str[i + 1] = '\0';
	return (ptr_str);
}
