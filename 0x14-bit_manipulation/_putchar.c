#include <unistd.h>
/**
 * _putchar - print characters on screen
 * @c: character variable
 *
 * Return: an integer value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
