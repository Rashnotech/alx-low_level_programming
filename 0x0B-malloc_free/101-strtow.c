#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - convert a string into word
 * @str: a string literal
 *
 * Return: a each word otherwise null
 */
char **strtow(char *str)
{
	char **words;
	int i, j, num_word;

	num_word = 0;
	if (str == NULL || *str == ' ')
		return (NULL);
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t')
			continue;
		num_word++;
		str++;
	}
	words = malloc((num_word + 1) * sizeof(char));
	if (words == NULL)
		return (NULL);
	for (i = 0; *str; i++)
	{
		words[i] = malloc((num_word + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		for (j = 0; (str[j] != ' ' && str[j] != '\t') && str[j] != '\0'; j++)
			words[i][j] = str[j];
		words[i][j] = '\0';
	}
	words[i + 1] = NULL;
	return (words);
}
