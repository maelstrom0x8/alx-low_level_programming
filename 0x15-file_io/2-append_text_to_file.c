#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * _cstrlen - Returns the length of a string
 * @str: The string
 * Return: Length of the string
 */
size_t _cstrlen(char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * append_text_to_file - A function that appends text to
 * the end of a file
 * @filename: Name of the file
 * @text_content: Content to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t len = _cstrlen(text_content);
		ssize_t nwritten = write(fd, text_content, len);

		if (nwritten == -1 || (size_t)nwritten != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
