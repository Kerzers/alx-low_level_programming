#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: a positive integer
 * Return: the sum of all its parameters, 0 if n is null
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list ap;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 1; i <= n; i++)
		sum += va_arg(ap, int);
	return (sum);
}
