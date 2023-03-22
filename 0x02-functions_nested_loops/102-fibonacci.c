#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long f;
	int i;

	for (i = 1; i <= 50; i++)
	{
	f = f1 + f2;
		if (i != 50)
		printf("%lu, ", f);
		else
		printf("%lu\n", f);
	f1 = f2;
	f2 = f;
	}
	return (0);
}
