/**
 * *leet - convert {a,e,o,l,t} to code
 * @str: string of characters
 *
 * Return: a string value of coded string
 */
char *leet(char *str)
{
	int i, j;
	char list[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; list[j]; j++)
		{
			if (str[i] == list[j])
				str[i] = code[j];
		}

	}
	return (str);
}
