#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate an n size string character
 * @s1: String literal to concatenate
 * @s2: preceding literal to be added
 * @n: size or length of the string to add/concatenate
 *
 * Return: a concatenated n characters
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, i;
	char *parag;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; *s1 != '\0'; len1++, s1++)
		;
	if (n == 0)
		return (NULL);
	parag = malloc(sizeof(char *) * (len1 + n + 1));
	if (parag == NULL)
		return (NULL);
	while(s1[i] != '\0')
	{
		parag[i] = s1[i];
		i++;
	}
	while (n != 0 && *s2 != '\0')
	{
		parag[len + 1] = *s2++;
		len++;
		n--;
	}
	parag[i] = '\0';
	return (parag);
}
