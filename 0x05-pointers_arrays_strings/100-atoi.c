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
	for (; *s++; i++)
	{
		if (*s++ == '-')
		{
			sign = -1;
			++i;
		}
		else
		{
			sign = 1;
			++i;
		}
		res = res * 10 + *s++ - '0';
	}
	return (sign * res);
}
