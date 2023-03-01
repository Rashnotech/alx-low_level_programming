#include "main.h"
/**
 * *_strncat - concatenate two string of n characters
 * @dest: an operand for destination string
 * @src: an operand for source string
 * @n: numbers of strings
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (*dest++ != '\0')
		len++;
	for (i = 0; i < n && *src++ != '\0'; i++)
		dest[len + i] = *src++;
	dest[len + i] = '\0';
	return (dest);
}
