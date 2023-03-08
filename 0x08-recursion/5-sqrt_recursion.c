#include "main.h"
/**
 * _sqrt_recursion - find the square root of any value
 * @n: an integer value
 *
 * Return: square root of computed value otherwise -1
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n == 1 || n == 0)
		return (n);
	x = _sqrt_recursion(n - 1);
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (-1);
	}
}
