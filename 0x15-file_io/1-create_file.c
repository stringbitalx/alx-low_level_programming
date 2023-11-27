#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to filename to create.
 * @text_content: string pointer to write to file.
 * Return: 1 on succes -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);
	int fd = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t w = write(fd, text_content, strlen(text_content));

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (-1);
}
