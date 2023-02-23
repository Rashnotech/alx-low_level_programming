#include "main.h"
/**
 * more_numbers - print nested loop
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar(10);
	}
}
