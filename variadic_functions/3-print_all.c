# include "variadic_functions.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
/**
 * print_c - print to c
 * @a: list
 * Return: Always 0 (Success)
*/
int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}
/**
 * print_i - print to i
 * @a: list
 * Return: Always 0 (Success)
*/
int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}
/**
 * print_f - print to f
 * @a: list
 * Return: Always 0 (Success)
*/
int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}
/**
 * print_s - print to s
 * @a: list
 * Return: Always 0 (Success)
*/
int print_s(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}
/**
 * print_all - print all
 * @format: format
*/
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	char *sep2 = ", ";
	va_list allArgs;
	printer ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(allArgs, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", sep);
				ops[j].f(allArgs);
			}
			j++;
		}
		sep = sep2;
		i++;
	}
	printf("\n");
	va_end(allArgs);
}
