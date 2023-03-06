/**
 * _strstr - find the occurence needle in the haystack and print
 * @haystack: given string character
 * @needle: search substring/needle
 *
 * Return: string of found character otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p1_start, *p2;

	*p1 = haystack;
	while (*p1 != '\0')
	{
		*p1_start = p1, *p2 = needle;
		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (p1_start);
		p1 = p1_start + 1;
	}
	return (0);
}
