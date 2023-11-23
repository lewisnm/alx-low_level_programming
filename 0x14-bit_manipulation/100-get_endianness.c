#include "main.h"

/**
 * get_endianness - Checks for endianness.
 *
 * Return: 0 if its a big endian / 1 if its a little endian
 */
int get_endianness(void)
{
	int fig = 1;
	char *endian = (char *)&fig;

	if (*endian == 1)
		return (1);

	return (0);
}
