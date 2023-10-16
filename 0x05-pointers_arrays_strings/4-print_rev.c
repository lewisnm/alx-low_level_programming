#include "main.h"

/**
 * print_rev - prints the string in reverse
 *
 * @s: the string being printed in reverse
 *
 * Return:void
 */

void print_rev(char *s)
{
	int length = 0;
	const char *end = s;

	while (*end != '\0')
	{
		end ++;
		length ++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n')
}
