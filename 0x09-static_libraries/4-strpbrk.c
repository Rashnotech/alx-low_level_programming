/**
 * _strpbrk - find the match character of accept in a string
 * @s: string of characters
 * @accept: substring of char
 *
 * Return: character found during search otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
