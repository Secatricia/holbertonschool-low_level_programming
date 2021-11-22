#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of file
 * @text_content: parametre
 * Return:	eE (0 or testRead)
 */
int create_file(const char *filename, char *text_content)
{

	ssize_t fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	ssize_t a;
	int size = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[size])
		{
			size++;
		}
		a = write(fd, text_content, size);
	}

	if (fd == -1 || a == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
