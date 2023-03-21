#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: the function's argument
 *
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	int ret;

	if (n < 0)
		ret = -n;
	else
		ret = n;
	return (ret);
}
