/**
 * _puts_recursion - a function that print a string recursively
 * @s: string of characters
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar(10);
	_putchar(_puts_recursion(s));
	s++;
}
