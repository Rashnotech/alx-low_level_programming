/**
 * _strlen - string length of any character
 * @s: an operand for pointer
 *
 * Return: an integer value of length
 */
int _strlen(char *s)
{
	int len;

	while (*s++ != '\0')
	{
		len++;
	}
	return (len - 1);
}
