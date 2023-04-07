#include "main.h"
int _strlen_recursion(char *s);
int right_eq_left_ptr(char *s, int len, int i);
/**
 * is_palindrome - ckecks if a string is a palindrome
 * @s: string to check
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*s == 0)
		return (1);
	if (*s)
	{
		len = _strlen_recursion(s);
		return (right_eq_left_ptr(s, len, 0));
	}
	else
		return (1);
}
/**
 * _strlen_recursion - prints the length of a string
 * @s: pointer to a string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return(1 + _strlen_recursion(s + 1));
}
/**
 *right_eq_left_ptr - check if the end of s equal to the first char in each itr
 *@s: poiter to a string
 *@len: lentgh of s
 *@i: number of iterations
 *Return: 1 if the checks is right, 0 otherwise
 */
int right_eq_left_ptr(char *s, int len, int i)
{
	char *p;

	if (i > (len / 2) + 1)
		return (1);
	p = &s[len - 1 - i];
	if (*s == *p)
		return (right_eq_left_ptr(s + 1, len - 1, i + 1));
	else
		return (0);
}
