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
	int len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	ptr_str = malloc(len1 + len2 + 1);
	if (ptr_str == NULL)
		return (NULL);
	strcpy(ptr_str, s1);
	strcat(ptr_str, s2);
	ptr_str[len1 + len2] = '\0';
	return (ptr_str);
}
