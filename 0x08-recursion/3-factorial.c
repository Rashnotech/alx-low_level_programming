#include "main.h"
/**
 * factorial - Factorial of any number
 * @n: an integer value
 *
 * Return: factorial of the number otherwise -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
