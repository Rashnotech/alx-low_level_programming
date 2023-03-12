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
	int coins[] = {25, 10, 5, 2, 1};
	int rem, i, result, num;

	num = atoi(argv[1]);
	result = 0, i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num < 0)
		printf("0\n");

	while (i < 5 && num != 0)
	{
		if (num >= coins[i])
		{
			result += num / coins[i];
			rem = num % coins[i];
			num = rem;
		}
		i++;
	}
	printf("%d\n", result);
	return (0);
}
