int rand(void)
{
	static int arr[] = {8, 8, 7, 9, 23, 74};
	static int num = 0;
	return (arr[num++]);
}
