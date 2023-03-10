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
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
			printf("%s\n", argv[count]);
	}
	return (0);
}
