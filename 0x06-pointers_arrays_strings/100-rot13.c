#include "main.h"
/**
 * rot13 - encodes a string into rot13
 * @s: string as a parameter
 * Return: a pointer to a string
 */
char *rot13(char *s)
{
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
				s[i] = code[j];
		}
	i++;
	}
	return (s);
}
