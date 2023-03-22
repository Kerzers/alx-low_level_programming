#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci term
 * under 4000000
 * Return: Always 0 (Success)
 */
int main(void)
{
	long f1 = 0;
	long f2 = 1;
	long f = 0;
	int i;
	unsigned long sum = 1;

	for (i = 1; f <= 4000000; i++)
	{
	if (f % 2 != 0)
	sum = sum + f;
	f = f1 + f2;
	f1 = f2;
	f2 = f;
	}
	printf("%lu\n", sum);
	return (0);
}
