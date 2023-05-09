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
	char buffer[1024];

	if (ac != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	origin = open(av[1], O_RDONLY);
	copie = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (origin == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (copie == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((r_origin = read(origin, buffer, 1024)) > 0)
	{	w_copie = write(copie, buffer, r_origin);
		if (w_copie == -1 || (r_origin != w_copie))
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (r_origin == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close_org = close(origin);
	if (close_org == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origin);
		exit(100);
	}
	close_cp = close(copie);
	if (close_cp == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copie);
		exit(100);
	}
		return (0);
}
