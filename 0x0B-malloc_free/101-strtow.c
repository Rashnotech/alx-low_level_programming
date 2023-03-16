#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - String literal to word
 * @str: a string literal
 *
 * Return: each words otherwise NULL
 */
char **strtow(char *str)
{
	char **words, *new_word;
	int word_start, word_length, word_count, word_index, i;

	if (!str)
		return (NULL);
	word_count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' '))
			word_count++;
	}
	if (word_count == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	word_index = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		word_start = i;
		word_length = 0;
		while (str[i] && str[i] != ' ')
		{
			word_length++;
			i++;
		}
		new_word = malloc(sizeof(char) * (word_length + 1));
		memcpy(new_word, &str[word_start], word_length);
		new_word[word_length] = '\0';
		words[word_index++] = new_word - word_length;
	}
	words[word_index] = NULL;
	return (words);
}
