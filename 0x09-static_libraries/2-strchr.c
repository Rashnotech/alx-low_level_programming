/**
 * _strchr - finds if a character is in a string
 * @s: string of character to make search
 * @c: character to check find
 *
 * Return: found string otherwise NULL;
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
