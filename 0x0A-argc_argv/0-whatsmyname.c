#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer of 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
			printf("%s\n", argv[count]);
	}
	return (0);
}
