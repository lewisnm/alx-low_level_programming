#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: the name being printed
 * @f: pointer to the function being printed
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
