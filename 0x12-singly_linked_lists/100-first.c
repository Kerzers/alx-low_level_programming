#include <stdio.h>

__attribute__ ((__constructor__))
/**
 *print_first - prints a sentence before the main function is executed
 *
 *Return: nothing
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
