/**
 * _strspn - find the position of a substring in a string
 * @s: string of characters
 * @accept: substring to check position
 *
 * Return: an integer value of the found substring position
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*s != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] != '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
