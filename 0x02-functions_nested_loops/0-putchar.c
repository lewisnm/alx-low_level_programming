#include <stdio.h>
#include <unistd.h>
#include <string. h>
/**
 * main - Entry point
 * Description - code prints _putchar
 * Return - (0) success
 */

int main(void)
{

	const char *word = "_putchar";

	size_t len = strlen(word);

	ssize_t bytes_written = write(STDOUT_FILENO, word, len);

	if (bytes_written != (ssize_t)len)
	{

	}

return (0);
}
