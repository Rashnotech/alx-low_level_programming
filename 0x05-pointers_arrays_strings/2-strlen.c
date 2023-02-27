/**
 * _strlen - string length of any character
 * @s: an operand for pointer
 *
 * Return: an integer value of length
 */
int _strlen(char *s)
{
	int i, len;
	char c[50];

	len = 1;
	for (i = 0; *str; i++)
	{
		c[i] = *str++;
	}
	for (i = 0; c[i]; i++)
	{
		if (c[i] != '\0')
			len++;
	}
	return (len - 1);
}
