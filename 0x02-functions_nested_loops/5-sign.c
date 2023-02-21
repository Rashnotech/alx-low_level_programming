/**
 * print_sign - check for the sign of number
 * @n: operand
 *
 * Return: an integer value 0 otherwise 1
 */
int print_sign(int n);

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
