#include <stdio.h>
/**
 * main - print base 10 digits
 *
 * Return: an integer value of 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
