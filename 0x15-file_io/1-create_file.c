#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ret, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
		ret = write(fd, text_content, len);
		if (ret == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
