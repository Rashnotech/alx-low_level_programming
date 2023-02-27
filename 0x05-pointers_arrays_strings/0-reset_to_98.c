/**
 * reset_to_98 - reset a value to 98
 * @n: a pointer declaration
 *
 */
void reset_to_98(int *n)
{
	int *ptr = &n;

	*ptr = 98;
	_putchar((*ptr / 10) + '0');
	_putchar((*ptr % 10) + '0');
}
