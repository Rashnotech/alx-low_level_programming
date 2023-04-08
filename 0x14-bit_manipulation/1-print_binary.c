#include "main.h"
/**
 * print_binary - Print binary number for specifed value
 * @n: specified digit
 */
void print_binary(unsigned long int n)
{
	int index = 0;

	while ((n >> index) > 1)
	{
		index++;
	}
	while (index >= 0)
	{
		if ((n >> index) & 1)
			_putchar('1');
		else
			_putchar('0');
		index--;
	}
}
