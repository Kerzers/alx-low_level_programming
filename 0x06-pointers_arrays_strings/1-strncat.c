#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string, terminating by '\0'
 * @src: a string to be appended to dest
 * @n: number of bytes used from src
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l = 0;

	while (dest[l])
	{
		l++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
