/**
 * *_strcat - concatenate two string characters
 * @dest: an operand for destination string
 * @src: an operand for source string
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int len, i;
	char *s;

	len = 0;
	while (*src++ != '\0')
		len++;
	for (i = 0; *dest; i++)
		s = *dest++;
	for (i = 0; *src; i++)
		s[len + i] = *src++;
	s[len + i] = '\0';
	dest = *s;
	return (dest);
}
