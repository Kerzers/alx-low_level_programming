#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character to find in a string
 * Return: pointer to the first occurrence of the character c in the string s,
 * otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int test = 1;

	while (*s != '\0')
	{
		if (*s == c)
		{
		test = 0;
		break;
		}
	s++;
	}
	if ((*s == c) && (*s == '\0'))
	return (s);
	if (test)
		s = '\0';
	return (s);
}
