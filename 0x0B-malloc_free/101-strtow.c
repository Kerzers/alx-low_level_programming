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
	int i = 0, sum = 0, j, k = 0, cp = 0, wordN = 0, spaceN = 0, ind = 0;
	int *len;

	if (str == NULL || (str != NULL && strlen(str) == 0))
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] == 32 || str[i] == '\t')
		{
		spaceN++; /* number of spaces */
		i++;
		}
	i++;
	}
	printf("str %c\n",*str);
	printf("spaceN %d\n", spaceN);
	len = malloc(sizeof(int) * (spaceN + 1));
	if (len == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		printf("str[%d]= %c\n", i, str[i]);
		if (str[i] != 32)
		{
			cp++; /* number of character in each word */
		}
		else
		{
			printf("i=%d\n", i);
			len[k] = cp; /* len[k] contains lenght of the word number k */
			printf("len[%d]= %d\n", k, len[k]);
			sum += len[k];
			printf("sum %d\n", sum);
			k++;
			cp = 0;
		}
	i++;
	}
	if (str[i] == '\0')
	{
	len[k] = cp; /* len[k] contains lenght of the word number k */
	printf("len[%d]= %d\n", k, len[k]);
	sum += len[k];
	k++;
	}
	wordN = k; /* number of words in str */
	printf("wordN = %d\n", wordN);
	s = malloc(sizeof(char *) * wordN);
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
	i = 0;
	for (j = 0; j < wordN; j++)
	{
		k = 0;
		while (k < len[i])
		{
			if (str[ind] != 32)
			{
			*(s[j] + k) = str[ind];
			k++;
			}
		printf("index = %d\n", ind);
		ind++;
		}
	printf("j = %d\n", j);
	*(s[j] + k) = '\n';
	printf("%d\n", i);
	i++;
	}
	printf("j = %d et i = %d\n", j, i);
	s[j] = NULL;
	return (s);
}
