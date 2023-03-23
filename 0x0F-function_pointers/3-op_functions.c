#include "3-calc.h"
/**
 * op_add - a function to add to number
 * @a: first operand
 * @b: second operand
 *
 * Return: an integer value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to subtract two number
 * @a: first operand
 * @b: second operand
 *
 * Return: an integer value
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - a function to multiply two number
 * @a: first operand
 * @b: second operand
 *
 * Return: an integer value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function to divide two number
 * @a: first operand
 * @b: second operand
 *
 * Return: an integer value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - a function to find the module of two number
 * @a: first operand
 * @b: second operand
 *
 * Return: an integer value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
