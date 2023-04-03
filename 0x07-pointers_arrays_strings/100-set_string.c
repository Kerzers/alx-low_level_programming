#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: adress of a pointer
 * @to: string as a parameter
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
