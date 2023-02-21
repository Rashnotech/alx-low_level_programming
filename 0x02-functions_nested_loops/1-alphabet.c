#include "main.h"
/**
 * print_alphabet - print lowercase alphabets
 *
 */
void print_alphabet(void);

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(10);
}
