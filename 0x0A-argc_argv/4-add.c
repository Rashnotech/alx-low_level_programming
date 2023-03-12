#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - a program to add number
 * @argc: argument count
 * @argv: argument value
 *
 * Return: an integer value of 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, sum, count;

	count = 1, sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!isdigit(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
