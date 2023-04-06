#include "main.h"

int _strlen_recursion(char *s);
int check_pal(char *s);

/**
 * strlen recursion - return length of string
 * @s: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursions(s + 1));
}

/**
 * check_pal - checks characters recursively for palindrome
 * @s: string to be measured
 * @i: iterator
 * @len: the length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
