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
	char ltemp;

	len = 0, i = 0;
	while (*s++ != '\0')
		len++;
	len -= 1;
	while (i < len)
	{
		ltemp = s[len];
		s[len] = s[i];
		s[i] = ltemp;
		i++;
		len--;
	}
}
