#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print out numbers
 * @separator: a separator between values
 * @n: size of operand
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, unsigned int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}
