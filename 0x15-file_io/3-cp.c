#include "main.h"
/**
 * main - Main function
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer value of 0 otherwise -1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_to_file(argv);
	return (0);
}

/**
 * copy_to_file - copy content to destination
 * @arr: file descriptors
 *
 * Return: an integer value of 0 otherwise -1
 */
void copy_to_file(char **arr)
{
	int file_from, file_to, ret;
	ssize_t nread, nwrite;
	char buff[1024];
	mode_t perm;

	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_from = open(arr[1], O_RDONLY);
	file_to = open(arr[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, perm);
	checkfile(file_from, file_to, arr);
	nread = 1024;
	while (nread == 1024)
	{
		nread = read(file_from, buff, 1024);
		if (nread == -1)
			checkfile(nread, 0, arr);
		nwrite = write(file_to, buff, nread);
		if (nwrite == -1)
			checkfile(0, nwrite, arr);
	}
	ret = close(file_from);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	ret = close(file_to);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

/**
 * checkfile - if error occured file trying to open
 * @file_from: check if it doesn't exit or can't be read
 * @file_to: check if file can't be created or can't append
 * @arr: file names
 */
void checkfile(int file_from, int file_to, char **arr)
{
	if (file_from == -1)
		print_error("Error: Can't read from file ", 98, arr[1]);
	if (file_to == -1)
		print_error("Error: Can't write to ", 99, arr[2]);
}

/**
 * print_error - print error on the screen
 * @str: error message
 * @code: error code
 * @file: file name
 */
void print_error(char *str, int code, char *file)
{
	(void)file;
	dprintf(STDERR_FILENO, "%s%s\n", str, file);
	exit(code);
}
