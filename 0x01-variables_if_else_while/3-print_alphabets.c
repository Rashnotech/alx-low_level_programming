#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: an integer value of 0
 */
int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
