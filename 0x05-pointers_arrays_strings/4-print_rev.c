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
	const char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
