#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: points to a string of 0 and 1
 *
 * Return: the converted number, or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, digit = 0, i = 0;

	if (!b)
		return (0);
	len = strlen(b);
	--len;
	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		digit += ((b[i] - '0') << len);
		--len;
		i++;
	}
	return (digit);
}
