#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: nb letters
 * Return:	eE (0 or testRead)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd = 0;
	int testRead;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	testRead = read(fd, buffer, letters);
	if (testRead == -1)
		return (0);
	close(fd);

	testRead = write(STDOUT_FILENO, buffer, testRead);
	free(buffer);

	if (testRead == -1)
		return (0);

	return (testRead);
}
