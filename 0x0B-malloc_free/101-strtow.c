#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow - convert a string into word
 * @str: a string literal
 *
 * Return: a each word otherwise null
 */
char **strtow(char *str)
{
	char **words, *word;
	int i, j, num_word, len;

	num_word = 0;
	if (str == NULL || *str == ' ')
		return (NULL);
	len = strlen(str);
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t')
			continue;
		num_word++;
		str++;
	}
	words = malloc((num_word + 1) * sizeof(char));
	word = malloc((len + 1) * sizeof(char));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		j = 0;
		while (*str && *str != ' ')
		{
			word[j] = *str;
			j++;
			str++;
		}
		if (j > 0)
		{
			word[j] = '\0';
			words[i] = malloc((j + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
				free(word);
				return NULL;
			}
			strcpy(words[i],word);
			i++;
		}
		else
		{
			str++;
		}
	}
	words[num_word] = NULL;
	return (words);
}
