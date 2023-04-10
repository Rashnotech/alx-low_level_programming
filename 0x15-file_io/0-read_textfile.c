#include "main.h"
#include <unistd.h>
/**
 * read_textfile - a function to read text file into program
 * @filename: filename of file to read
 * @letters: number of text to read
 *
 * Return: an integer value of read text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wd;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters + 1);
	if (buff == NULL)
	{
		close(fd);
		return (-1);
	}
	rd = read(fd, buff, letters);
	buff[rd] = '\0';
	if (rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	wd = write(STDOUT_FILENO, buff, letters);
	if (wd == -1)
		return (0);
	free(buff);
	close(fd);
	return (rd);
}
