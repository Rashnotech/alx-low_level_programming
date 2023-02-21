/**
 * _islower - check if its a lowercase letter
 * @c: operand
 *
 * Return: an integer value 1 otherwise 0
 */
int _islower(int c);

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
