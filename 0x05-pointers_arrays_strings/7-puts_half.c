#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a strings content
 *
 * @str: the pointer to where the string is
 *
 * Return:  void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start = length / 2;

	if (str == NULL)
	{
		return;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
