#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int cp = 0;
	int j;
	char temp;

	while (*s++)
	{
		cp++;
	}
	for (j = cp - 1; j >= cp / 2; j--)
	{
		temp = s[j];
		s[j] = s[cp - j - 1];
		s[cp - j - 1] = temp;
	}
}
