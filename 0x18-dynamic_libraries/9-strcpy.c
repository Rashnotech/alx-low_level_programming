#include <stdio.h>
/**
 * _strcpy - copy string from source to destination
 * @dest: an operand for the destination
 * @src: an operand for the source
 *
 * Return: destinaton variable
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src; i++)
		dest[i] = *src++;
	dest[i] = '\0';
	return (dest);
}
