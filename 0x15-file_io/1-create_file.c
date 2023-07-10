#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * _strlen - Returns the length of a string
 * @str: The string
 * Return: Length of the string
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * create_file - A function that creates a file
 * and populates it with content
 * @filename: Name of the file
 * @text_content: Contents to be added
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t len = _strlen(text_content);
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
