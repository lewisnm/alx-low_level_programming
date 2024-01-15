#include "main.h"

/**
 *  _puts - prints the inputed string
 *
 *  @str: the string being printed
 *
 *  Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
