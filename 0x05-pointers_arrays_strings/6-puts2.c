#include "main.h"
/**
 * puts2 - print and skip a string
 * @str: an operand declare as pointer/ array
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i + 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
