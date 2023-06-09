#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars, initializes it with a specific char
 *@size: size of an array
 *@c: char to initilize the array
 *Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
