#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *strtow - splits a string into words
 *@str: string as an input
 *Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, sum = 0, j, k, cp = 0, wordN = 0, spaceN = 0, ind = 0;
	int *len;

	if (str == NULL || (str != NULL && strlen(str) == 0))
		return (NULL);
	while (*str)
	{
		while (*str == 32 || *str == '\t')
		{
		spaceN++; /* number of spaces */
		str++;
		}
	str++;
	}
	len = malloc(sizeof(int) * (spaceN + 1));
	if (len == NULL)
		return (NULL);
	while (*str)
	{
		while (*str != 32 || *str != '\t')
		{
			cp++; /* number of character in each word */
			str++;
		}
		len[i] = cp; /* len[i] contains lenght of the word i */
		sum += len[i];
		i++;
		cp = 0;
		str++;
	}
	wordN = i; /* number of words in str */
	s = malloc(sizeof(char *) * (sum + wordN));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < wordN; j++)
	{
	s[j] = malloc(sizeof(char) * len[j]);
	if (s[j] == NULL)
	{	for (j = j - 1; j >= 0; j--)
			free(s[j]);
		free(s);
		return (NULL);
	}
	}
	for (j = 0; j < wordN; j++)
	{
		k = 0;
		while (k < len[i])
		{
			while (str[ind] != 32 || str[ind] != '\t')
			{
			*(s[j] + k) = str[ind];
			k++;
			j++;
			ind++;
			}
			ind++;
		}
		*(s[j] + k) = '\n';
		i++;
	}
	s[j] = NULL;
	return (s);
}
