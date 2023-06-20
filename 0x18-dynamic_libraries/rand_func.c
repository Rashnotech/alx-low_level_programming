int rand(void)
{
	static int num = 0;
	static int arr[] = {8, 8, 7, 9, 23, 74};
	return (arr[num++]);
}
