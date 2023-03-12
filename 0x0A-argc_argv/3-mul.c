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
	int num1, num2, mult;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;
	printf("%d\n", mult);
	return (0);
}
