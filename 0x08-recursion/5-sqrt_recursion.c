#include "main.h"
/**
 * _sqrt_recursion - find the square root of any value
 * @n: an integer value
 *
 * Return: square root of computed value otherwise -1
 */
int _sqrt_recursion(int n)
{
	double x;

	if (n == 1 || n == 0)
		return (n);
	x = _sqrt_recursion(n - 1);
	return ((x + n / x) / 2);
}
