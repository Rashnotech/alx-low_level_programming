#include "main.h"
/**
 * _strlen_recursion - get the string length of any string
 * @s: string of character
 *
 * Return: length of the string otherwise 0
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
		return (len);
	_strlen_recursion(s + 1);
	len++;
}
