#include <stdio.h>
/**
 * main - Entry point
 * description - code prints _putchar
 * Return - (0) success
 */

int main(void)
{

	char word[] = "_putchar";

	for (int a = 0; word[a] != '\0'; a++)
	{
		putchar(word[a]);
	}

	putchar('\n');
	return (0);
}
