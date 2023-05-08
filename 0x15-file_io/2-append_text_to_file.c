#include "main.h"
#include <string.h>
/**
 * append_text_to_file - a function that append text a the end of a file
 * @filename: the name of the file
 * @text_content: content to add to the end of the file
 *
 * Return: an integer value of 1 otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nwrite;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!filename || fd == -1)
		return (-1);
	if (text_content)
	{
		x_len = strlen(text_content);
		nwrite = write(fd, text_content, x_len);
		if (nwrite == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
