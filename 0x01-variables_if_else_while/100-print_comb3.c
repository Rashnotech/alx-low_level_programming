#include <stdio.h>
/**
 * main - print a combination of number
 *
 * Return: an integer value of 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
