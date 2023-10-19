#include "main.h"

/**
 * string_toupper - converts all lowercase lettes of a string to uppercase
 *
 * @l: what to modify
 *
 * Return: l
 */

char *string_toupper(char *l)
{
	int k;

	k = 0;
	while (l[k] != '\0')
	{
		if (l[k] >= 'a' && l[k] <= 'z')
		{
			l[k] = l[k] - 32;
			k++;
		}
	}
	return (l);
}
