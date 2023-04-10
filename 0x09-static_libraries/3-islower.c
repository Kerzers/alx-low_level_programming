#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: The character to check
 *
 * Return: 1 if lowercase character, 0 otherwise
 */
int _islower(int c)
{
	int ret;

	if ((c >= 97) && (c <= 122))
		ret = 1;
	else
		ret = 0;
	return (ret);
}
