#include "main.h"

/**
 * leet - encodes a string
 *
 * @n: string being encoded
 *
 * Return: n
 */

char *leet(char *n)
{
	int h, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (h = 0; n[h] != '\0'; h++)
	{
		for (r = 0; r < 10; r++)
		{
			if (n[h] == s1[r])
			{
				n[h] = s2(r);
			}
		}
	}
	return (n);
}
