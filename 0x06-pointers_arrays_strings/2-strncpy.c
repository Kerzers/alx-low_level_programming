#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: a string to be copied
 * @n: number of bytes to copy
 * Return: a pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
