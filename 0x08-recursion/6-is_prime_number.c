#include "main.h"
/**
 * is_prime_helper - prime helper function
 * @n: accept any number
 * @i: iterator
 *
 * Return: an integer value of 1 othewise 0
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}
/**
 * is_prime_number - Check if a number is prime
 * @n: any integer value
 *
 * Return: an integer value of 1 othewise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}
