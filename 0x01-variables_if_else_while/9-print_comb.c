#include <stdio.h>
/**
 * main - print single digit with comma
 *
 * Return: an integer value of 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchcar(' ');
	}
	putchar(10);
	return (0);
}
