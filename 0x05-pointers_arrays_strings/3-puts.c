/**
 * _puts - print a string or character constant
 * @str: an operand with character type
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str; i++)
		_putchar(*str++);
	_putchar(10);
}
