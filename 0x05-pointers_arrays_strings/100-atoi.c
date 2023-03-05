#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: an integer value
 */
int _atoi(char *s)
{
	int sign, i, digit,  num;

	sign = 0, i = 0, num = 0;
	while (s[i] == ' ')
		i++;
	if (s[i] == '-')
	{
		++sign;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
				digit = -digit;
			num = num * 10 + digit;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	return (num);
}
