#include <stdio.h>
/**
 * print_numbers - print an integer value 0 - 9
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
