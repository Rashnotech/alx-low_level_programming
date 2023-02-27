#include "main.h"
/**
 * rev_string - print a string reversal
 * @s: an operand declare as pointer/ array
 *
 * Description: display string of character in reverse
 */
void rev_string(char *s)
{
	int i, len;
	char ltemp = s[0];

	len = 0, i = 0;
	while (*s++ != '\0')
		len++;
	while (i < len)
	{
		len--;
		ltemp = s[i];
		s[i] = s[len];
		s[len] = ltemp;
		i++;
	}
}
