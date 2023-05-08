#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - copies the content of a file to another file
 *@ac: count arguments
 *@av: vector of arguments
 *Return: 0 Always (success)
 */
int main(int ac, char **av)
{
	int origin, copie, close_org, close_cp;
	ssize_t r_origin, w_copie;
	char *buffer = NULL;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	origin = open(av[1], O_RDONLY);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	r_origin = read(origin, buffer, 1024);
	if (origin == -1 || r_origin == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	copie = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	w_copie = write(copie, buffer, r_origin);
	if (copie == -1 || w_copie == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close_org = close(origin);
	if (close_org == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", origin);
		exit(100);
	}
	close_cp = close(copie);
	if (close_cp == -1)
	{	dprintf(2, "Error: Can't close fd %d\n", copie);
		exit(100);
	}
		return (0);
}
