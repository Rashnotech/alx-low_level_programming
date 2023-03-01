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

	len = 0;
	while (*dest++ != '\0')
		len++;
	for (i = len - 1; *dest; i++)
		dest[i] = *src++;
	dest[i] = '\0';
	return (dest);
}
