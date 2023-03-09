#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = _sqrt_recursion(n - 1);
		return ((x * x <= n) ? x : x - 1);
	}
}
