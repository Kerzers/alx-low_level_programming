#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: string as a parameter
 * @accept: string to compare its character with s
 * Return: a pointer to the byte in s that match one of the bytes
 * of accept, otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int test = 1;
	int j;

	while (*s != '\0')
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (*s == accept[j])
		{
		test = 0;
		break;
		}
	}
		if (test == 0)
		break;
	s++;
	}
	if (test)
		s = '\0';
	return (s);
}
