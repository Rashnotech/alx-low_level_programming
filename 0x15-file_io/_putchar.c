#include "main.h"
/**
 * _putchar - write character string to stdout
 * @c: Character to print on screen
 *
 * Return: an integer value 1 otherwise -1
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
