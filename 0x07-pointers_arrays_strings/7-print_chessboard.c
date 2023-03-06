/**
 * print_chessboard - print a chessboard
 * @a: operand with a pointer address
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; *a; i++)
	{
		for (j = 0; a*; j++)
			_putchar(a[i][j]);
		_putchar(10);
	}
}
