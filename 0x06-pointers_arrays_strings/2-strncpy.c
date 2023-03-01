#include "main.h"
/**
 * *_strncpy - copy a (n) number of string
 * @dest: an operand to contain copied string
 * @src: an operand that hold string to be copied
 * @n: specify the number of string to copy
 *
 * Return: destination operand
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && *src++ != '\0'; i++)
		dest[i] = *src++;
	dest[i] = '\0';
	return (dest);
}
