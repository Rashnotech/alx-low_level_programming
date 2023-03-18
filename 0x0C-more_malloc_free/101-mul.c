#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - a program to multiply two number
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer value of 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, len1, len2;
	int *mem;

	if (!isdigit(*argv[1]) || !isdigit(*argv[2]) || argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = strtol(argv[1], NULL, 10);
	num2 = strtol(argv[2], NULL, 10);
	len1 = snprintf(NULL, 0, "%d", num1);
	len2 = snprintf(NULL, 0, "%d", num2);
	mem = malloc(sizeof(int) * (len1 + len2 + 1));
	if (mem == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	*mem = num1 * num2;
	printf("%d\n", *mem);
	free(mem);
	return (0);
}
