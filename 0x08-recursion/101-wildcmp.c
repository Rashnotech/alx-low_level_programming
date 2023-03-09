#include "main.h"
/**
 * wildcmp - compare two string of characters for match
 * @s1: first string compare
 * @s2: second string compare
 *
 * Return: an integer value 1, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '*')
	{
		if (*s2 != '\0' && (wildcmp(s1, s2 + 1)))
			return (1);
		if (wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
