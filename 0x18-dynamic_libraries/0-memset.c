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
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
