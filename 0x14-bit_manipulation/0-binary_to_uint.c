#include "lists.h"
#include <string.h>
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string literal
 *
 * Return: an unsigned int of digit in base 10
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bit, len, index = 0, result = 0;

	len = strlen(b);
	--len;
	while (b[index] != '\0')
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		bit = b[index] - '0';
		result += (bit * (1 << len));
		index++;
		--len;
	}
	return (result);
}
