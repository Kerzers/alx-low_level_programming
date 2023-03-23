#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: the character to check
 * Return: 1 if c is upercase, otherwise 0
 */
int _isupper(int c)
{
	int ret;

	if (c >= 65 && c <= 90)
	ret = 1;
	else
	ret = 0;
	return (ret);
}
