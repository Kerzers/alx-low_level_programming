#include "main.h"
/**
 * factorial - calculate the factorial on an integer
 * @n: input
 * Return: the factorial of a positive number, otherwise -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
