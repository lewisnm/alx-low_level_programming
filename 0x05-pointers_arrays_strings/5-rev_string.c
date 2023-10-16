#include "main.h"

/**
 * rev_string - reverses a sting in an array
 *
 * @s: the pointer pointing to where the array is
 *
 * Return: void
 */

void rev_string(char *s)
{
	if (s == NULL)
	{
		return;
	}
	char *start = str;
	char *end = str;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		chat temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
