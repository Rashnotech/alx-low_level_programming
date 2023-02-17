#include <stdio.h>
/**
 * main - print values in base16 lowercase
 *
 * Return: an integer value of 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
