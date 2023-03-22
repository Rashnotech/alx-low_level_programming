#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function that prints a name
 * @name: a name of a person
 * @f: a function that takes in an array of character
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
