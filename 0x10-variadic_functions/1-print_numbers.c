#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers separated by a given separator
 *@separator: the string to be printed between numbers
 *@n: the number of integers passed to the function
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d", va_arg(ap, int));
	}
	printf("%d\n", va_arg(ap, int));
	/*va_end(ap);*/
}
