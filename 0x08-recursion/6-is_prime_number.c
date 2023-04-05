#include "main.h"
int prime_iter(int n, int i);
/**
 * is_prime_number - tests if it is a prime number
 * @n: integer to test
 * Return: 1 if a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int cp =0;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n > 2)
		cp = prime_iter(n, n - 1);
	if (cp == n - 2)
		return (1);
	else
		return (0);
}
/**
 *prime_iter - prints the occurence of n can be devised by i till 2 or not
 *@n: input
 *@i: input
 *Return: number of time that n is not devised by i till 2
 */
int prime_iter(int n, int i)
{
	if (i == 1)
		return (0);
	if (n % i != 0)
		return (1 + prime_iter(n, i - 1));
	else
		return (0);
}
