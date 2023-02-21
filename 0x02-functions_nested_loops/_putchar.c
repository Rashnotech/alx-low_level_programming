#include <unistd.h>
/**
 * _putchar - print a character
 * @c: an operand
 *
 * Return: an integer value of 0 otherwise 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
