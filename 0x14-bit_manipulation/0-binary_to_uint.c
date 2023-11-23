#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string..
 *
 * Return: 0 if b is null or the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int fig = 0, multi = 1;
	int size;

	if (!b)
		return (0);

	for (size = 0; b[size];)
		size++;

	for (size -= 1; size >= 0; size--)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);

		fig += (b[size] - '0') * multi;
		multi *= 2;
	}

	return (fig);
}
