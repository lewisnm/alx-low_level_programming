#include "main.h"

/**
 *  _puts_recursion - prints the inputed string
 *
 *  @s: the string being printed
 *
 *  Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	_putchar("%c\n", *s);
	s++;
}
