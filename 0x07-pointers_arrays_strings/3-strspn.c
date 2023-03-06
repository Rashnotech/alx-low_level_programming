/**
 * _strspn - find the position of a substring in a string
 * @s: string of characters
 * @accept: substring to check position
 *
 * Return: an integer value of the found substring position
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				i++;
				break;
			}
			else if (*accept++ == '\0')
				return (i);
				accept++;
		}
		s++;
	}
	return (i);
}
