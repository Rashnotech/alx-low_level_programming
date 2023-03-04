int _strlen(char *n);
void _reverse(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
/**
 * _strlen - find the string length
 * @n: an operand to keep character
 *
 * Return: an integer value
 */
int _strlen(char *n)
{
	int len;

	for (len = 0; *n != '\0'; n++)
		len++;
	return (len);
}
/**
 * _reverse - reverse a string of characters
 * @str: an operand for pointer
 */
void _reverse(char *str)
{
	int len, i;
	char temp;

	len = _strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		temp = str[len - i - 1];
		str[len - i - 1] = str[i];
		str[i] = temp;
	}
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
	int counter, i, j, max, sum, len1, len2;

	counter = 0, max = 0;
	len1 = _strlen(n1);
	len2 = _strlen(n2);
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || counter > 0)
	{
		sum = counter;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		counter = sum / 10;
		if (_strlen(r) < (size_r - 1))
			r[max] = sum % 10 + '0';
		else
			return (0);
		max++;
		i--;
		j--;
	}
	r[max + 1] = '\0';
	_reverse(r);
	return (r);
}
