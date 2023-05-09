#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: file to be printed
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 *if the file can not be opened or read, return 0
 *if filename is NULL return 0
 *if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, nw;
	int fd;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	n = read(fd, buffer, letters);
	if (n == -1)
		return (0);
	nw = write(STDOUT_FILENO, buffer, n);
	if (nw == -1 || n != nw)
		return (0);
	close(fd);
	return (n);
}
