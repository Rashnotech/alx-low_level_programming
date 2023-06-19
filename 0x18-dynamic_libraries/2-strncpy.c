/**
 * *_strncpy - copy a (n) number of string
 * @dest: an operand to contain copied string
 * @src: an operand that hold string to be copied
 * @n: specify the number of string to copy
 *
 * Return: destination operand
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
