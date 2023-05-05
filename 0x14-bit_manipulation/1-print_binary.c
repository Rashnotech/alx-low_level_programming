#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary number
 * @n: binary number to be printed
 */
void print_binary(unsigned long int n)
{
	int index = 0;

	while ((n >> index) > 1)
		index++;
	while (index >= 0)
	{
		if ((n >> index) & 1)
			_putchar('1');
		else
			_putchar('0');
		index--;
	}
}
