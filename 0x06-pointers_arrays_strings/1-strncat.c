#include "main.h"

/**
 *  *_strncat - concatinates two strings with a set limit on the second string
 *
 *  @dest: first string
 *  @src: second string
 *  @n: the limit of chars from the second string to be printed
 *
 *  Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*scr != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		scr++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
