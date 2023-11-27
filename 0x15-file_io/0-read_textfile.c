#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints to stdout
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: number of letters read
 * 0 if file cannot be opened, read, is NULL
 * or doesn't write specified number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
