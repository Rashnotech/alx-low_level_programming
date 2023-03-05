#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: an integer value
 */
int _atoi(char *s)
{
	int sign, i;
	unsigned int num;

	sign = 1, i = 0, num = 0;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (sign * num);
}
