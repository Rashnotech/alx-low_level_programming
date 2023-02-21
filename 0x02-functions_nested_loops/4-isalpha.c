/**
 * _isalpha - check for alphabets
 * @c: operand
 *
 * Return: an integer value 1 otherwise 0
 */
int _isalpha(int c);

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
