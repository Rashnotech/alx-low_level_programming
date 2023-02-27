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

	len = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] != '\0')
			len++;
	}
	i = 0;
	while (i < len)
	{
		len--;
		ltemp = s[i];
		s[i] = s[len];
		s[len] = ltemp;
		i++;
	}
}
