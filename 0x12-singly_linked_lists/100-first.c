#include <stdio.h>
/**
 * print_literal - Prints a string literal before main
 */
void __attribute__((constructor)) print_literal(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
