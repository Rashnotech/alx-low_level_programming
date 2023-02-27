#include "main.h"
/**
 * print_rev - print a string reversal
 * @s: an operand declare as pointer/ array
 *
 * Description: display string of character in reverse
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] != '\0')
			len++;
	}
	for (i = len - 1; s[i]; i--)
	{
		*s = s[i];
	}
}
