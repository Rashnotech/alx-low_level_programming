/**
 * _strspn - 
 * @s: string of characters
 * @accept: substring to check position
 *
 * Return: an integer value of the found substring position
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 1;
	while (*s != '\0' && *accept != '\0')
	{
		if (*s == *accept)
			break;
		i++;
		accept++;
		s++;
	}
	return (i);
}
