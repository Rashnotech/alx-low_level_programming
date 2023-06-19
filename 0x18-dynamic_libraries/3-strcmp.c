/**
 * _strcmp - compare two string if they match
 * @s1: first string characters
 * @s2: second string characters
 *
 * Return: an integer value of greather, equal or lessthan 0
 */
int _strcmp(char *s1, char *s2)
{
	int temp, i;

	i = 0;
	while (s1[i] != '\0' &&  s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			temp = s1[i] - s2[i];
			break;
		}
		else
			temp = 0;
		i++;
	}
	return (temp);
}
