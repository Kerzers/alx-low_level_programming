#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	double int f1 = 0;
	double int f2 = 1;
	double int f;
	int i;

	for (i = 1; i <= 50; i++)
	{
	f = f1 + f2;
		if (i != 50)
		printf("%d, ", f);
		else
		printf("%d\n", f);
	f1 = f2;
	f2 = f;
	}
	return (0);
}
