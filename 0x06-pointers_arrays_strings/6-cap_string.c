/**
 * *cap_string - captalize each word in a sentence
 * @str: an operand for string
 *
 * Return: capitalize words
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		else
			switch (str[i])
			{
				case '\n':
				case '\t':
				case 32:
				case 33:
				case 34:
				case 40:
				case 41:
				case 44:
				case 59:
				case 63:
				case 123:
				case 125:
					continue;
			}
		++i;
	}
	return (str);
}
