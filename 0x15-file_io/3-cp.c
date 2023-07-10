#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * _close - Closes a file
 * @fd: File descriptor for the file
*/

void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies file contents to another
 * file
 * @input_fd: File descriptor for the source file
 * @output_fd: File descriptor for the destination file
*/

void copy_file(int input_fd, int output_fd)
{
	ssize_t numRead;
	char buf[BUF_SIZE];

	while ((numRead = read(input_fd, buf, BUF_SIZE)) > 0)
		if (write(output_fd, buf, numRead) != numRead)
			dprintf(STDERR_FILENO, "Error: Couldn't write whole buffer");
	if (numRead == -1)
		dprintf(STDERR_FILENO, "read");
}

/**
 * main - Entrypoint
 * @argc: Number orf arguments
 * @argv: Argument array
 * Return: Integer representing a program defined status
*/

int main(int argc, char *argv[])
{
	int input_fd, output_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	output_fd = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (output_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_file(input_fd, output_fd);

	_close(input_fd);
	_close(output_fd);

	return (0);
}
