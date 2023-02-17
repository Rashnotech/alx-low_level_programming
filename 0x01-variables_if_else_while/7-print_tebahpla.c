#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: an integer value of 0
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
