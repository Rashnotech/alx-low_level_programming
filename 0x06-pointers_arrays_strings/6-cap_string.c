/**
 * *cap_string - captalize each word in a sentence
 * @str: an operand for string
 *
 * Return: capitalize words
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	for (i = 1; str[i]; ++i)
	{
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
				str[i + 1] += 32;
		}
	}
	return (str);
}
