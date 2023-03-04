#include "main.h"
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
	int counter, i, j, len_r, len1, len2;

	counter = 0;
	for (len1 = 0; *n1 != '\0'; n1++)
		len1++;
	for (len2 = 0; *n2 != '\0'; n2++)
		len2++;
	for (len_r = 0; *r != '\0'; r++)
		len_r++;
	if (len1 >= size_r || len >= size_r || counter >= size_r)
		return (0);
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
		if (len_r < size_r - 1)
			*r++ = sum % 10 + '0';
		else
			return (0);
	}
	*r = '\0';
	return (r);
}
