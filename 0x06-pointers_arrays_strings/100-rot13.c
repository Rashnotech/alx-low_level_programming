/**
 * *rot13 - Encrypt a string of character
 * @str: a string of character to be encode
 *
 * Return: an encrypted message
 */
char *rot13(char *str)
{
	int i, j;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char swap[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letter[j]; j++)
		{
			if (str[i] == letter[j])
				str[i] = swap[j];
		}
	}
	return (str);
}
