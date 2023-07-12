# include "variadic_functions.h"
# include <stdarg.h>
# include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator
 * @n: number
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list printstr;
	char *strs;

	va_start(printstr, n);

	for (i = 0; i < n; i++)
	{
		strs = va_arg(printstr, char *);

		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (strs == NULL)
			printf("(nil)");
		else
			printf("%s", strs);
	}
	va_end(printstr);
	printf("\n");
}
