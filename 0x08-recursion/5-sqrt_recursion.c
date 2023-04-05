#include "main.h"
int sqrt_iter(int n, int k);
/**
 * _sqrt_recursion - calculates the natural square root of an integer
 * @n: integer as argument
 * Return: square root of n, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n ==1)
		return (1);
	else 
		return(sqrt_iter (n, 2));
}
/**
 * sqrt_iter - tests if k is the square root of n
 * @n: input
 * @k: input
 * Return: k if it is the square root of n, -1 otherwise
 */
int sqrt_iter(int n, int k)
{
	if (k == (n / 2) + 1)
	return (-1);
	if (k * k == n)
		return (k);
	else
		return (sqrt_iter(n, k + 1));
}
