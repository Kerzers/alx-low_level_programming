#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long f;
	int i;

	for (i = 1; i <= 98; i++)
	{
	f = f1 + f2;
		if (i != 98)
		printf("%lu, ", f);
		else
		printf("%lu\n", f);
	f1 = f2;
	f2 = f;
	}
	return (0);
}
