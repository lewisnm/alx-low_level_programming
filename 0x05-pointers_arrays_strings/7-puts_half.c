#include "main.h"

/**
 * puts_half - prints half of a strings content
 *
 * @str - the pointer to where the string is
 *
 * Return - void
 */

void puts_half(char *str)
{
	int length = 0;

	if (str == NULL)
	{
		return;
	}
	while (str[length] != '\0')
	{
		length++;
	}
	int start = (length - 1) / 2;

	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
