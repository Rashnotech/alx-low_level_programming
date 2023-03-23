#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print string with separtor
 * @separator: a separator between values
 * @n: size of operand
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	const char *str;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arglist, const char*);
		if (str == NULL)
			printf("nil");
		printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}
