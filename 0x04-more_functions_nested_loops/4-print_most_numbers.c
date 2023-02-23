#include "main.h"
/**
 * print_most_numbers - skip 2 and 4
 *
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
