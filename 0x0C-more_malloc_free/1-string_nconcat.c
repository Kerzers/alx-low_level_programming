#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string to concatenat to s1
 *@n: number of bytes from s2
 *Return:  point to a newly allocated space in memory, which contains s1,
 *followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1])
		len1++;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2])
		len2++;
	}
	if (n < len2)
		len2 = n;
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[len1 + i] = s2[i];
	s[len1 + len2] = '\0';
	return (s);
}
