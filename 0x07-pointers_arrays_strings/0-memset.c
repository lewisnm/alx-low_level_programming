#include "main.h"

/**
 * _memset -  is used to fill a block of memory with a particular value
 *
 * @s: represents the pointer to the memory area.
 * @b: represents the constant byte that will be used to fill the memory.
 * @n: represents the number of bytes to fill.
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
