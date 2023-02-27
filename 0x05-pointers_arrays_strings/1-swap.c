/**
 * swap_int - exchange the value of two variable
 * @a: an operand for pointer
 * @b: an operand for pointer
 * 
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
