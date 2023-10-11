#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description - code prints _putchar
 * Return - (0) success
 */

int main(void)
{

	const char *word = "_putchar\n";

	int word_length = 9;

	write(1, word, word_length);

	return (0);
}
