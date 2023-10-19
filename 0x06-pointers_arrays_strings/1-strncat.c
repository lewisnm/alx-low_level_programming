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
	int k, l = 0;
	int destlen = strlen(dest);
	int srclen = strlen(scr);

	l = destlen;
	if (n > srclen)
	{
		n = srclen;
	}
	for (k = 0; k < n; k++)
	{
		dest[l++] = src[k];
	}

	dest[l] = '\0';

	return (dest);
}
