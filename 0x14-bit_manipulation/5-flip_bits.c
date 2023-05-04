#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to flip to get
 * from one number n to another m
 *@n: number 1
 *@m: number 2
 *Return: number of bits needed to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i;

	for (i = 31; i >= 0; i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
