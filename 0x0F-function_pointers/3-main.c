#include "3-calc.h"
/**
 * main - a command line calculator
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer value otherwise code status
 */
int main(int argc, char *argv[])
{
	int  num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
