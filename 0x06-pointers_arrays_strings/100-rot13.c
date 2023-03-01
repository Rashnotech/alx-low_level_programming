#include "main.h"
/**
 * *rot13 - Encrypt a string of character
 * @str: a string of character to be encode
 *
 * Return: an encrypted message
 */
char *rot13(char *str)
{
	while (*s++ != '\0')
	{
		if ((*str >= 65 && *str <= 77) || (*str >= 97 && *str <= 109))
			str = *str + 13;
		else
			str = *str - 13;
	}
	return (str);
}
