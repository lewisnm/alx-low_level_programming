#include "variadic_functions.h"

/**
 * print_all - prints every argument given
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	int p = 0;
	char *str, *sep = "";

	va_list anyarg;

	va_start(anyarg, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", sep, va_arg(anyarg, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(anyarg, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(anyarg, double));
					break;
				case 's':
					str = va_arg(anyarg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					p++;
					continue;
			}
			sep = ", ";
			p++;
		}
	}
	printf("\n");
	va_end(anyarg);
}


