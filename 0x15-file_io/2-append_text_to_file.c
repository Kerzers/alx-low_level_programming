#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *append_text_to_file - appends text at the end of the file
 *@filname: name of the file
 *@text_content: the NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 *Do not create the file if it does not exist
 *If filename is NULL return -1
 *If text_content is NULL, do not add anything to the file.
 *Return 1 if the file exists and -1 if the file does not exist
 *or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nw = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		nw = write(fd, text_content, strlen(text_content));
		if (nw == -1 || nw != (ssize_t)strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
