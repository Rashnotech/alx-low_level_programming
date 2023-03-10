/**
 * *_strncat - concatenate two string of n characters
 * @dest: an operand for destination string
 * @src: an operand for source string
 * @n: numbers of strings
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
