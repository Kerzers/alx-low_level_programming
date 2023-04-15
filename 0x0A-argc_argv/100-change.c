#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints the minimum number of coins to make change for a money amount
 *@argc: number of arguments passed to the command line
 *@argv: the array of arguments
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, c = 0, d = 0, r1, r2, r3, r4 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) >= 0)
	{
		a = atoi(argv[1]) / 25;
		r1 = atoi(argv[1]) % 25;
		if (r1 > 0)
		{
			b = r1 / 10;
			r2 = r1 % 10;
			if (r2 > 0)
			{
				c = r2 / 5;
				r3 = r2 % 5;
				if (r3 > 0)
				{
					d = r3 / 2;
					r4 = r3 % 2;
				}
			}
		}
	}
	printf("%d\n", a + b + c + d + r4);
	return (0);
}
