#include "main.h"
/**
 * _pow_recursion - a function that gets the power of values
 * @x: any positive integer number
 * @y: power of the operand
 *
 * Return: an integer value otherwise -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
