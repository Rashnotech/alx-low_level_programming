#include "main.h"
#include <string.h>
/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: content to write in file
 *
 * Return: an integer value of 1 otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int nwrite, fd, x_len;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (!filename || fd == -1)
		return (-1);
	if (text_content)
	{
		x_len = strlen(text_content);
		nwrite = write(fd, text_content, x_len);
		if (nwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
