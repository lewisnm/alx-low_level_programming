#include "main.h"

/**
 * main - prints out the number of arguments passed
 *
 * @argc: indexes the arguments
 * @argv: prints out the specific string of an index
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
