#include "main.h"

/**
 *
 * main - prints out the nameof the function
 *
 * @argc: indexes the arguments
 * @argv: prints out the specific string of an index
 *
 * return: success
 */

int main(int argc, char *argv[])
{
	argv[0] = argv[1];
	_putchar(argv[0]);
	_putchar("\n");
	return (0);
}
