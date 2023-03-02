#include <unistd.h>
/**
 * _putchar - print a character on screen
 * @c: an operand that stores input
 *
 * Return: an integer value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
