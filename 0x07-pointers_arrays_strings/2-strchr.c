#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: points to a string
 * @c: the character I want to find in the string
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			s = '\0';
			break;
		}
		s++;
	}
	return (s);
}
