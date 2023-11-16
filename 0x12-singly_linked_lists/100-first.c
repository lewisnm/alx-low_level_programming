#include "lists.h"

/**
 * word_out - a function executed before the main is executed
 * Return: void
 */

void __attribute__((constructor)) word_out()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
