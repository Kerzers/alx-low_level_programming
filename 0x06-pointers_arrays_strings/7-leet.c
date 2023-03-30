#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string as a parameter
 * Return: a pointer to a string
 */
char *leet(char *s)
{
	char c[11] = "AaEeOoTtLl";
	char code[] = "4433007711";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 11 ; j++)
		{
			if (s[i] == c[j])
				s[i] = code[j];
		}
	i++;
	}
	return (s);
}
