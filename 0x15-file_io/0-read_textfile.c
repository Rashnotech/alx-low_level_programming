#include "main.h"
/**
 * read_textfile - a function that reads a text file and print it to stdout
 * @filename: name file to read from or maybe source file
 * @letters: is the number of letters it should read and print
 *
 * Return: an unsigned integer of 0 otherwise 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, nread, nwrite;

	fd = open(filename, O_RDONLY);
	if (fd == -1 || !filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	nread = read(fd, buff, letters);
	nwrite = write(STDOUT_FILENO, buff, nread);
	if (nread == -1 || nwrite != nread)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (nwrite);
}
