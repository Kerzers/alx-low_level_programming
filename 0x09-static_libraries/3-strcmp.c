#include "main.h"
/**
 * _strcmp - compares the first non matching value
 * of two strings
 * @s1: first string
 * @s2: second string
 * Return: an integer less than 0 if s1 < s2
 * equal to 0 if s1 = s2
 * greater than 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	result = s1[i] - s2[i];
	return (result);
}
