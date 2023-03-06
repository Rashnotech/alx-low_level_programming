/**
 * _strpbrk - find the match character of accept in a string
 * @s: string of characters
 * @accept: substring of char
 *
 * Return: character found during search otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return ('\0');
}

