#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_string - prints string, followed by a new line.
 * @separator:the string to be printed between the strings
 * @n: the number of strings passed to the function
 * return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 1; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (separator != NULL)
		{
			if (str != NULL)
				printf("%s%s", str, separator);
			else
				printf("(nil)%s", separator);
		}
		else
		{
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}
	str = va_arg(ap, char *);
	if (str != NULL)
		printf("%s\n", str);
	else
		printf("(nil)\n");
	va_end(ap);
}
