/**
 * print_alphabet - print lowercase alphabets
 *
 */
void print_alphabet(void);

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar(10);
}
