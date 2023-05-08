#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *create_file - creates a file
 *@filename: the name of the file to create
 *@text_content: a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 *(file can not be created, file can not be written, write “fails”, etc…)
 *The created file must have those permissions: rw-------.
 *If the file already exists, do not change the permissions.
 *If the file already exists, truncate it
 *If filename is NULL return -1
 *If text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t nw;
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	nw = write(fd, text_content, strlen(text_content));
	if (nw == -1)
		return (-1);
	close(fd);
	return (1);
}
