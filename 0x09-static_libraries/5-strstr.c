#include "main.h"

/**
* _strstr - locates first occurrence of substring needle in string haystack
*
* @haystack: string to search
* @needle: substring to fetch
*
* Return: pointer beginning of substring
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *I = haystack;
		char *P = needle;

		while (*I == *P && *P != '\0')
		{
			I++;
			P++;
		}

		if (*P == '\0')
		return (haystack);
	}
	return (0);
}
