#include "main.h"

/**
* _strpbrk - locates the first occurrence of any of the bytes accept
*
* @s: string to search
* @accept: string to search in
*
* Return: pointer to the byte in s that matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int h, j;

	for (h = 0; s[h] != '\0'; h++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[h] == accept[j])
			return (s + h);
		}
	}
	return (0);
}
