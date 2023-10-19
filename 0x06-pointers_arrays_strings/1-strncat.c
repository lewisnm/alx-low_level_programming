#include "main.h"

/**
 *  *_strncat - concatinates two strings with a set limit on the second string
 *
 *  @dest: first string
 *  @src: second string
 *  @n: the limit of chars from the second string to be printed
 *
 *  Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
