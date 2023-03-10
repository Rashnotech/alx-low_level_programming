/**
 * string_toupper - convert character to uppercase
 * @c: an operand for string of character
 *
 * Return: uppercase characters
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		++i;
	}
	return (c);
}
