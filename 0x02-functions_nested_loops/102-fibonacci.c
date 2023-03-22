#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f1 = 0;
	int f2 = 1;
	int i, f;

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
