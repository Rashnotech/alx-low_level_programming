#include "main.h"
/**
 * _abs - print the absolute value of numbers
 * @n: an operand
 *
 * Description: check an absolute value
 * Return: an integer value of 0 otherwise 1
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		n *= 1;
		return (n);
	}
}
