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
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
