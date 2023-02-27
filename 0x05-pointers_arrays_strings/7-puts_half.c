#include "main.h"
/**
 * puts_half - print the half of any string
 * @str: an operand declare as pointer/ array
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != '\0')
			len++;
	}
	if (len % 2 != 0)
	{
		n = (len + 1) / 2;
		for (i = n; str[i]; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = len / 2; str[i]; i++)
			_putchar(str[i]);
	}
	_putchar(10);
}
