#include "main.h"
#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int i;
	int j, test;

	for (i = n / 2; i > 1; i--)
	{
	if (n % i == 0)
	{
		test = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
			test = 0;
			break;
			}
		}
	}
	if (test == 1)
	{
	printf("%ld\n", i);
	break;
	}
	}
	return (0);
}
