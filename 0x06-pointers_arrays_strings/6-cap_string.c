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
	while (str[i])
	{
		while (!(str[i] >= 97 && str[i] <= 122))
			i++;
		switch (str[i - 1])
		{
			case 0:
			case '\n':
			case '\t':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
