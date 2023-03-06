/**
 * _strchr - finds if a character is in a string
 * @s: string of character to make search
 * @c: character to check find
 *
 * Return: found string otherwise NULL;
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			return (0);
		else 
			return (s);
		s++;
	}
	return;
}
