#include <stdio.h>
/**
 * main - print the argument vector passed in command line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer of 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	int counter;

	if (argc > 0)
	{
		for (counter = 0; counter < argc; counter++)
			printf("%s\n", argv[counter]);
	}
	return (0);
}
