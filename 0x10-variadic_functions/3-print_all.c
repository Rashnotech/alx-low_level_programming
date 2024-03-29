#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - a function that prints everything
 * @format: a listed type of argument passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	char *separator = "", *str;
	va_list arglist;

	i = 0;
	va_start(arglist, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arglist, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arglist, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arglist, double));
					break;
				case 's':
					str = va_arg(arglist, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arglist);
}
