/**
 * _strstr - find the occurence needle in the haystack and print
 * @haystack: given string character
 * @needle: search substring/needle
 *
 * Return: string of found character otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (;*haystack != '\0'; haystack++)
	{
		while (*needle != '\0')
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
			needle++;
		}
	}
	return (0);
}

