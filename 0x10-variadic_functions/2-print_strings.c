#include "variadic_functions.h"

/**
 * print_strings - entry point
 * @separator: ,
 * @n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *tmp;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, char *);

		if (tmp)
			printf("%s", tmp);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
