#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sum all the integer values
 * @n: number of value supplied
 *
 * Return: an integer value otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(arglist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(arglist, unsigned int);
	va_end(arglist);
	return (sum);
}
