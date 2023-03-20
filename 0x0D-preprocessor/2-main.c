#include <stdio.h>
/**
 * main - a program that prints the name of file it was
 * compiled from
 *
 * Return: an integer value of 0 otherwise 1
 */
int main()
{
	printf("%s\n", __FILE__);
	return 0;
}
