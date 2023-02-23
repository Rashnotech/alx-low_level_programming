/**
 * _isupper - Check if a letter is uppercase
 * @c: an operand to supply data in func.
 *
 * Return: an integer value of 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
