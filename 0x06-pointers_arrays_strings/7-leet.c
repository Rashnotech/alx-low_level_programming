#include "main.h"
/**
 * *leet - convert {a,e,o,l,t} to code
 * @str: string of characters
 *
 * Return: a string value of coded string
 */
char *leet(char *str)
{
	while (*str++ != '\0')
	{
		if (*str == 'a' || *str == 'A')
			str = 4;
		else if (*str == 'e' || *str == 'E')
			str = 3;
		else if (*str == 'o' || *str == 'O')
			str = 0;
		else if (*str == 't' || *str == 'T')
			str = 7;
		else if (*str == 'l' || *str == 'L')
			str = 1;
	}
	return (str);
}
