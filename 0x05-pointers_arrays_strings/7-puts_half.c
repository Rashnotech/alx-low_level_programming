#include "main.h"
/**
 * puts_half - print the half of any string
 * @str: an operand declare as pointer/ array
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] != '\0')
			len++;
	}
	if (len % 2 != 0)
	{
		for (i = len / 2; i <= len - 1; i++)
			_putchar(s[i]);
	}
	else
	{
		for (i = len /2; s[i]; i++)
			_putchar(s[i]);
	}
	_putchar(10);
}
