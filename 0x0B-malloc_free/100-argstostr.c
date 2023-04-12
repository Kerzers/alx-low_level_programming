#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *argstostr - concatenates all the arguments of your program
 *@ac: the number of command-line arguments passed to the program
 *@av: an array of strings that holds the actual command-line arguments
 * Return: Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int *a;
	int i, j, k, len, sum = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = malloc(sizeof(int) * ac);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		a[i] = strlen(av[i]);
		sum += a[i];
	}
	len = sum + ac;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	i = 0;
	for (j = 0; j < len; j++)
	{
		k = 0;
		while (k < a[i])
		{
			s[j] = *(av[i] + k);
			k++;
			j++;
		}
		s[j] = '\n';
		i++;
	}
	return (s);
}
