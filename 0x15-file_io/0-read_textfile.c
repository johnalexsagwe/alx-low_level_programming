#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file can not be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails or does not write the expected bytes,return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (bytes_read < (ssize_t)letters)
	{
		bytes_read = read(fd, &buffer, 1);
		if (bytes_read == 0)
			break;
		if (bytes_read == -1)
		{
			close(fd);
			return (0);
		}
		bytes_written = write(STDOUT_FILENO, &buffer, 1);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd);
			return (0);
		}
	}
	close(fd);
	return (bytes_read);
}

