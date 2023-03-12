#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program to print a minimum number of cents
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer value of 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	int rem, result, num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num < 0)
			printf("0\n");
		while ( num != 0)
		{
			if (num >= 25)
			{
				result = num / 25;
				rem = num % 25;
			}
			else if (num >= 10)
			{
				result += (num / 10);
				rem = num % 10;
			}
			else if (num >= 5)
			{
				result += (num / 5);
				rem = num % 5;
			}
			else if (num >= 2)
			{
				result += (num / 2);
				rem = num % 2;
			}
			else
			{
				result += (num / 1);
				rem = num % 1;
			}
			num = rem;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
