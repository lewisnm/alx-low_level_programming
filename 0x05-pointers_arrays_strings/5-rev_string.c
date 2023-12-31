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
	char *start = s;
	char *end = s;

	if (s == NULL)
	{
		return;
	}

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
