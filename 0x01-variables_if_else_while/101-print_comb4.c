#include <stdio.h>
/**
 * main - print combination of three numb.
 *
 * Return: an integer of value 0
 */
int main(void)
{
	int i, j, k;
	for (i = '0'; i <= '7'; i++)
	{
		for (j = i; j <= '8'; j++)
		{
			for (k = j; k <= '9'; k++)
			{
				if (i == j || j == k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
