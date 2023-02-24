#include <stdio.h>
/**
 * main - print fizzbuzz fizz & buzz
 *
 * Return: an integer value 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			prinf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	return (0);
}
