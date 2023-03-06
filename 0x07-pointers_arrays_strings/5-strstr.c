/**
 * _strstr - find the occurence needle in the haystack and print
 * @haystack: given string character
 * @needle: search substring/needle
 *
 * Return: string of found character otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0' && *needle != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
		needle++;
	}
	return (0);
}

