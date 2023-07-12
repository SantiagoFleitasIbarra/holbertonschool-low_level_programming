#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: integer
 * Return: Always sum (Success)
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list argsum;

	if (n == 0)
		return (0);

	va_start(argsum, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(argsum, int);

	va_end(argsum);
	return (sum);
}
