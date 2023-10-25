#include "main.h"

/**
 * _strlen_recursion - prints out the string length
 *
 * @s: string pointer
 *
 * Return: 0 success
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		_strlen_recursion(s + 1);
			i++;
		_putchar(i);
	}
}
