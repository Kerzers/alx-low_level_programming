#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sums two integers
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts two integers
 * @a: first int
 * @b: second int
 * Return: substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: first int
 * @b: second int
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates the modulo of two integers
 * @a: first int
 * @b: second int
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
