/**
 * _isdigit - check if a digit is supplied
 * @c: an operand for supplied value
 *
 * Return: an integer value 1 otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
