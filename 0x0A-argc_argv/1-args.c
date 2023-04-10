#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints he number of arguments passed into it, followed by a new line
 *@argc: count arguments
 *@argv: argument vector
 *Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
