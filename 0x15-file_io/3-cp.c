void print_error(char *message, char *filename, int exit_status);
void closefile(int fd);
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
	int fd, ft;
	ssize_t write_status, read_status;
	char *buff;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		print_error("Error: Error: Can't read from file %s\n", file_from, 98);
	ft = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (ft == -1)
		print_error("Error: Can't write to %s\n", file_to, 99);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		print_error("Error: Can't write to %s\n", file_to, 99);
	read_status = read(fd, buff, 1024);
	write_status = write(ft, buff, read_status);
	if (write_status == -1 || read_status == -1)
		free(buff);
	free(buff);
	closefile(fd);
	closefile(ft);
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
 * closefile - close opened file
 * @fd: file descriptor
 */
void closefile(int fd)
{
	int retval;

	retval = close(fd);
	if (retval == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
