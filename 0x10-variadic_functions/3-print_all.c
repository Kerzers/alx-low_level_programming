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
	int i = 0;
	char c;
	int d;
	float f;
	char *s;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c, ", c);
				break;
			case 'i':
				d = va_arg(args, int);
				printf("%d, ", d);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f, ", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s != NULL)
					printf("%s, ", s);
				else
					printf("(nil), ");
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
