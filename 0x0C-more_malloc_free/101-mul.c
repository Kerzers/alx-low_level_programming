#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiplies two positive numbers
 *@argc: number of arguments passed to the command line
 *@argv: the array of arguments
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
		{
			printf("Error\n");
			exit(98);
		}
		}
	}
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	return (0);
}
