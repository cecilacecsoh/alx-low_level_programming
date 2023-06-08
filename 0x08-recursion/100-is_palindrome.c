#include "main.h"

int check_palindrome(char *s, int i, int len);
int strlen_recursion(char *s);

/**
 * is_palindrome - check if a string is a palindrome
 *
 * @s: string to reverse
 *
 * Return: 1 if palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, strlen_recursion(s)));
}

/**
 * strlen_recursion - returns the length of a string
 *
 * @s: the string to check
 *
 * Return: length of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks the strings characters if palindrome
 *
 * @s: the string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}

