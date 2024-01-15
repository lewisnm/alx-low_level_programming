#include "main.h"

/**
 * _memcpy - copys the memory area from one pointer to another
 *
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: represents the area in memory to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
