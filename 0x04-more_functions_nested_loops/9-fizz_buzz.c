#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i = 1;

	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf(" Buzz");
			else if (i % 3 == 0 && i % 5 == 0)
				printf(" FizzBuzz");
				else
					printf(" %d", i);
	}
	printf("\n");
	return (0);
}
