#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: a string that we want to know its length
 *
 * Return: string's length
 */
int _strlen(char *s)
{
	int len = 1;

	while (*s != '\0')
	{
		len++;
	}
	return (len);
}
