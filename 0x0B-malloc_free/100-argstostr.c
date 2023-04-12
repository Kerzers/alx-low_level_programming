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
	int i, k, sum = 0;
	size_t j;

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
	s = malloc(sizeof(char) * sum + ac);
	if (s == NULL)
		return (NULL);
	i = 0;
	for (j = 0; j < strlen(s); j++)
	{
		k = 0;
		while (k < a[i])
		{
			s[j] = *(av[i] + k);
			printf("%c\n", s[j]);
			k++;
			j++;
		}
		s[j] = '\n';
		i++;
	}
	return (s);
}
