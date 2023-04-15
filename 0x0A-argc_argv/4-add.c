#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers, followed by a new line.
 *@argc: count arguments
 *@argv: argument vector
 *Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
