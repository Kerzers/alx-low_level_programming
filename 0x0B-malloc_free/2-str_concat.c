#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: point to a newly allocated space in memory that contains the contents
 *of s1, followed by the contents of s2, and null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	size_t i, j = 0;
	size_t len1, len2, len = 0;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);
	len = len1 + len2;
	s = malloc(sizeof(char) * len + 1);
		if (s == NULL)
			return (NULL);
		if (len == 0)
			*s = '\0';
		for (i = 0; i < strlen(s1); i++)
			s[i] = s1[i];
		for (i = strlen(s1); i < len; i++)
		{
			s[i] = s2[j];
			j++;
		}
		return (s);
}
