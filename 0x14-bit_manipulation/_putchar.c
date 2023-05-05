#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 * @c: Character type to print to stdout
 *
 * Return: an integer value of 1 otherwise -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
