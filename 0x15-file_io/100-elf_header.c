#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - displays the information contained in the ELF header
 *at the start of an ELF file
 *@ac: arguments count
 *@av: arguments vector
 *Return: 0 (success)
 */
int main(int ac, char **av)
{
	int r, fd;
	char buffer[1024];
	char elf[20] = "ELF Header:";

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage elf_header elf_filename\n");
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	lseek(fd, 0, SEEK_SET);
	r = read(fd, buffer, strlen(elf));
	if (fd == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	/**
	*printf("%s - %s\n", buffer, elf);
	*printf("%d and %d\n", r, strcmp(buffer, elf));
	*/
	if (strcmp(buffer, elf) != 0)
	{	dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", av[1]);
		exit(98);
	}
	r = read(fd, buffer, 1024);
	write(STDOUT_FILENO, buffer, r);
	close(fd);
	return (1);
}
