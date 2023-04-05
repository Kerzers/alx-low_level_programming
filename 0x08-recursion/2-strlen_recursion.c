#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: pointer to a string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		len = 0;
	else
		len = 1 + _strlen_recursion(s + 1);
	return (len);
}
