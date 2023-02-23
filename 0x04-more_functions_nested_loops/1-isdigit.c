/**
 * _isdigit - check if a digit is supplied
 * @c: an operand for supplied value
 *
 * Return: an integer value 1 otherwise 0
 */
int _isdigit(int c)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i++;
	}
}
