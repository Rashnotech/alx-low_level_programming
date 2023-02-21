/**
 * _abs - print the absolute value of numbers
 *
 * Description: check an absolute value
 * int - data type definition of operand
 * Return: an integer value of 0 otherwise 1
 */
int _abs(int);

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
