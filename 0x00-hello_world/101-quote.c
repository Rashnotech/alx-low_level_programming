#include <stdio.h>
/**
 * main - prints a string literal
 *
 * Return: an error value otherwise 0
 */
int main(void)
{
	char d[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fprintf(stdout,"%s\n",d);
	return (1);
}
