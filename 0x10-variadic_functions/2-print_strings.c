#include "variadic_functions.h"

/**
 * print_strings - prints the strings given
 *
 * @separator: a string to be printed in between the strings
 * @n: number of strings being passed through  
 *
 * Return: void 
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int k;
	char *str;

	va_start(strings, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(strings, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && (k < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
