#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - append text_content to existing file
 * @filename: name of file
 * @text_content: text content
 *
 * Return: an integer value 1 otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wd = write(fd, text_content, strlen(text_content));
	if (wd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}