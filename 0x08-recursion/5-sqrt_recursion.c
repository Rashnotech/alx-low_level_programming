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
		x = _sqrt_recursion(n / 4) * 2;
		if ((x + 1) * (x + 1) <= n)
		{
			return (x + 1);
		}
		else
		{
			return (x);
		}
	}
}
