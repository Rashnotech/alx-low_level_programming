#include "main.h"
#include <unistd.h>
/**
 * main - copy content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer value of 0 otherwise 1/ exit code
 */
int main(int argc, char *argv[])
{
	int retval;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	retval = copy_from_file(argv[1], argv[2]);
	return (retval);
}

/**
 * copy_from_file - copy from file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: an integer value of 0 otherwise -1
 */
int copy_from_file(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_write;
	char *buff;

	file_check(file_from);
	file_check(file_to);
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		print_error("Can't write to %s\n", file_to, 99);
	bytes_read = read(fd_from, buff, 1024);
	while (bytes_read > 0)
	{
		if (fd_from == -1 || bytes_read == -1)
		{
			free(buff);
			print_error("Error: Can't read from file %s\n", file_from, 98);
		}
		bytes_write = write(fd_to, buff, bytes_read);
		if (fd_to == -1 || bytes_write == -1)
		{
			free(buff);
			close(fd_to);
			close(fd_from);
			print_error("Error: Can't write to %s\n", file_to, 99);
		}
		bytes_read = read(fd_from, buff, 1024);
		fd_to = open(file_to, O_WRONLY | O_APPEND);
	}
	free(buff);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}

/**
 * print_error - Print error codes that ocurred
 * @message: error message to print on screen
 * @filename: failed operation file
 * @exit_status: exit status code
 */
void print_error(char *message, char *filename, int exit_status)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_status);
}

/**
 * close_file - close opened file
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int retval;

	retval = close(fd);
	if (retval == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * file_check - check if file is NULL
 * @file: file to check
 */
void file_check(char *file)
{
	if (file == NULL)
		print_error("Error: Can't read from file %s\n", file, 98);
}
