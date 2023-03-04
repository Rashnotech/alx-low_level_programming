/**
 * _strlen - find the string length of a string
 * @n: an operand for input character
 *
 * Return: string length of character
 */
int _strlen(char *n)
{
	int len;

	for (len = 0; *n; n++)
		len++;	
	return len;
}
/**
 * *infinite_add - add two numbers together of type char
 * @n1: an operand of the first number
 * @n2: an operand for the second number
 * @r: to store the result for the computations
 * @size_r: buffer size of result to be printed
 *
 * Return: an char of 0 otherwise result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int counter; i, j, len1, len2;

	counter = 0;
	len1 = _strlen(n1);
	len2 = _strlen(n2);
	if (len1 >= size_r || len >= size_r || counter >= size_r)
		return 0;
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || counter >= 0)
	{
		sum = counter;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		counter = sum / 10;
		if(_strlen(r) < size_r - 1)
			*r++ = sum % 10 + '0';
		else
			return 0;
	}
	*r = '\0';
	return r;
}
