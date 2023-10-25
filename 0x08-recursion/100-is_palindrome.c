#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * comparison - compares each character of the string.
 * @s: string
 * @g1: smallest iterator.
 * @g2: biggest iterator.
 * Return: .
 */
int comparison(char *s, int g1, int g2)
{
	if (*(s + g1) == *(s + g2))
	{
		if (g1 == g2 || g1 == g2 + 1)
			return (1);
		return (0 + comparison(s, g1 + 1, g2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparison(s, 0, _strlen(s) - 1));
}
