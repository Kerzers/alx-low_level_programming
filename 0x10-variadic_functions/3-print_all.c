#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_all - prints anything depending on their format
 *@format: the list of types of arguments passed to the function
 *c: char, i: integer, f: float, s: char * (if string is NULL, print (nil))
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int d, i = 0;
	char c;
	float f;
	char *s, *sp = "";

	if (format)
	{	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", sp, c);
				break;
			case 'i':
				d = va_arg(args, int);
				printf("%s%d", sp, d);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%s%f", sp, f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sp, s);
				break;
			default:
				break;
		}
		sp = ", ";
		i++;
	}
	printf("\n");
	}
	else
		printf("\n");
}
