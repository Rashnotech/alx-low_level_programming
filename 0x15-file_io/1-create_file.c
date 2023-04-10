#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * create_file - Create a file and give it a read write permission for user
 * @filename: name of file
 * @text_content: content to insert in a created file
 *
 * Return: an integer value 1 otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		wd = write(fd, text_content, strlen(text_content));
		if (wd == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
