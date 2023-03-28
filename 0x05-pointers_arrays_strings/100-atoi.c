#include "main.h"
/**
 *_atoi - converts a string to an integer
 * @s: string to convert
 *Return: an integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int sign = 1;
	int isint = 0;

	while (s[i] != '\0')
	{
	if (s[i] == 45)
	{
	sign *= -1;
	}
	while ((s[i] >= 48 && s[i] <= 57))
	{
	isint = 1;
	n = n * 10 + (s[i] - '0');
	i++;
	}
	if (isint == 1)
	{
	break;
	}
	i++;
	}
	n = sign * n;
	return (n);
}
