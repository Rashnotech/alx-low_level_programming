#include "main.h"
/**
 * string_toupper - convert character to uppercase
 * @c: an operand for string of character
 *
 * Return: uppercase characters
 */
char *string_toupper(char *c)
{
	int i;

	while (*c++ != '\0')
	{
		if (*c >= 97 && *c <= 122)
			c += 32;
	}
	return (c);
}
