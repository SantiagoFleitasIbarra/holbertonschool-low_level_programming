# include "variadic_functions.h"
# include <stdarg.h>
# include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: separator
 * @n: number
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list printnum;

	va_start(printnum, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(printnum, int));
	}
	va_end(printnum);
	printf("\n");
}
