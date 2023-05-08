#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


/**
 * read_textfile - A function that reads a the content
 * of a text file
 * @filename: Name of the file
 * @letters: Maximum number of letters to read
 * Return: Number of letters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nread, nwritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = (char *)malloc((letters + 1) * sizeof(char));

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	nread = read(fd, buf, letters);

	if (nread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[nread] = '\0';
	nwritten = write(STDOUT_FILENO, buf, nread);

	if (nwritten == -1 || nwritten != nread)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (nread);
}
