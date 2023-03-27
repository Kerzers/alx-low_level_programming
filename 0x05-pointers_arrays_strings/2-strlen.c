#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: a string that we want to know its length
 *
 * Return: string's length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
