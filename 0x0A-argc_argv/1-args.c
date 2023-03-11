#include <stdio.h>
/**
 * main - print the argument passed in command line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer of 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	int counter;
	(void)argv;

	if (argc > 0)
	{
		for (counter = 0; counter < argc; counter++)
			;
		printf("%d\n", counter - 1);
	}
	return (0);
}
