#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the multiplication of number
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer of 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	int counter, mult;

	mult = 1;
	if (argc >= 2 && argc <=3)
	{
		for (counter = 1; counter <= 2; counter++)
			mult *= atoi(argv[counter]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
