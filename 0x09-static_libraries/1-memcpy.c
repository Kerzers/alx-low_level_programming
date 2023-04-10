#include "main.h"
/**
 * _memcpy - copies memeory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: size of bytes to copy
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
