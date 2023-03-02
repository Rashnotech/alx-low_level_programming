/**
 * *leet - convert {a,e,o,l,t} to code
 * @str: string of characters
 *
 * Return: a string value of coded string
 */
char *leet(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
			str = 4;
		else if (str[i] == 'e' || str[i] == 'E')
			str = 3;
		else if (str[i] == 'o' || str[i] == 'O')
			str = 0;
		else if (str[i] == 't' || str[i] == 'T')
			str = 7;
		else if (str[i] == 'l' || str[i] == 'L')
			str = 1;
		i++;
	}
	return (str);
}
