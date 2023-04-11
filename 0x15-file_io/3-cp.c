void print_error(int code, char *message, char *filename, int exit_status);
int copyfrom_to_destin(char *file_from, char *file_to);
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
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
	retval = copyfrom_to_destin(argv[1], argv[2]);
	return (retval);
}

/**
 * copyfrom_to_destin - copy from file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: an integer value of 0 otherwise -1
 */
int copyfrom_to_destin(char *file_from, char *file_to)
{
	int fd, ft, FD_VALUE;
	ssize_t write_status, read_status;
	char *buff;

	fd = open(file_from, O_RDONLY);
	ft = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
		print_error(fd, "Error: Error: Can't read from file %s\n", file_from, 98);
	if (ft == -1)
		print_error(ft, "Error: Can't write to %s\n", file_to, 99);
	buff = malloc(sizeof(char) * strlen(file_from));
	if (buff == NULL)
	{
		close(fd);
		close(ft);
		return (-1);
	}
	read_status = read(fd, buff, 1024);
	write_status = write(ft, buff, read_status);
	if (write_status == -1 || read_status == -1)
	{
		free(buff);
		close(fd);
		close(ft);
		return (-1);
	}
	free(buff);
	if ((FD_VALUE = (close(fd))) == -1)
	{
		dprintf(FD_VALUE, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}
	if ((FD_VALUE = (close(ft))) == -1)
	{
		dprintf(FD_VALUE, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}

	return (0);
}

/**
 * print_error - Print error codes that ocurred
 * @code: file descriptor code
 * @message: error message to print on screen
 * @filename: failed operation file
 * @exit_status: exit status code
 */
void print_error(int code, char *message, char *filename, int exit_status)
{
	dprintf(code, message, filename);
	exit(exit_status);
}
