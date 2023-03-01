#include "main.h"
/**
 * _strcmp - compare two string if they match
 * @s1: first string characters
 * @s2: second string characters
 *
 * Return: an integer value of greather, equal or lessthan 0
 */
int _strcmp(char *s1, char *s2)
{
	int temp;

	while (*s1++ != '\0' &&  *s2++ != '\0')
	{
		if (*s1 != *s2)
			temp = *s1 - *s2;
		break;
		else
			temp = 0;
	}
	return (temp);
}
