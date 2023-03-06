/**
 * _memcpy - copy a variable size bytes from source to destination
 * @dest: destination memory
 * @src: source memory
 * @n: size in bytes of memory to be copied
 *
 * Return: destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && *src != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
