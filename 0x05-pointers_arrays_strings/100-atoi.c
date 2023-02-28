#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: an integer converted from the string
 */
int _atoi(char *s)
{
	int res, sign, i;

	res = 0;
	sign = 1;
	i = 0;
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++1)
		res = res * 10 + s[i] - '0';
	return sign * res;
}
