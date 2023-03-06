#include "main.h"
/**
 * _memset - fill in a memory with constant bytes
 * @s: memory area of the buffer
 * @b: const value to be written
 * @n: size of const value to written in memory
 *
 * Return: pointer of the memory s or buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s = b;
		i++;
	}
	return (s);
}
