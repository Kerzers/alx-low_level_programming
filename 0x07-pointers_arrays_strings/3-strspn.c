#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string as a parameter
 * @accept: string contains number of bytes to check
 * Return: number of bytes in the initial segment of s,
 * which consist only of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int cp = 0;

	while (s[i] != '\0' && s[i] != '\n' &&
	s[i] != 32 && s[i] != 44 &&
	s[i] != 59 && s[i] != 46 &&
	s[i] != 33 && s[i] != 63 &&
	s[i] != 34 && s[i] != 40 &&
	s[i] != 123 && s[i] != 41 &&
	s[i] != 125 && s[i] != '\t')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
			cp++;
		}
	i++;
	}
	return (cp);
}
