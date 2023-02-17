#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: an integer value of 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	}
	putchar(10);
	return (0);
}
